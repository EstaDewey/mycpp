#include <iostream>
#include <string>

/**
 *  @title: ����һ���࣬��ʾ������ݳ�Ա�����������ơ�0����ID��1����Ѫ����2���������������3�����ĸ�����������ʽ��4�����ʼ�ٶȡ�5���ﵱǰ���顢6����ȼ�
 *  �����������󲢶Զ�����г�ʼ��
 *  ��ʾ��������Ļ������ݰ�������ֵ���ȼ����˳���Ϸѡ������û�����ѡ��
 *  �������ж�ս��������ʽΪѡ���ܣ�ͨ���ٶȽ����ж�˭�ȹ���
 *  ��ʱ��ʾ�������Ѫ���͵�ǰ״̬
 *  ��һ������������������һ������ľ��飬���ٴ�ѡ�������Ź���ĵȼ�����������������Ӧ��ߣ��ٶȱ�����ֱ���û��˳���Ϸ��
 *  @author : dewey
 *  @time : 2018-10-16
 *  @param : money double ���
 *  @param : opt int �ʽ����
 **/

 using namespace std;
//������
 class Monster{

    public:
        string name_c;
        int baseMsg_c[7];
        Monster(string name,int baseMsg[7]);
        int getCtrl(string name_c,int baseMsg_c[7]);
        int battle(string name,int baseMsg[],int status);
        int addExp(int baseMsg[],int subExp);
        int battleWay(int way);


    private:
        //int getMonsterBasicMsg(string name,int baseMsg_c[]);
        int quitGame();
 };
//���캯��
 Monster::Monster(string name,int baseMsg[7]){
     name_c = name;
     baseMsg_c[7] = baseMsg[7];
     getCtrl(name,baseMsg);
 }

//���ƺ���
 int Monster::getCtrl(string name,int baseMsg[]){
    int exit;
    cout << "���ƣ�" << name << endl;
    cout << "����ֵ:" << baseMsg[5] << endl;
    cout << "�ȼ�:" << baseMsg[6] << endl;
    cout << "----------------------" << endl;
    cout << "�˳�(����1 �˳�)" << endl;
    cin >> exit;
    if(exit == 1){
        quitGame();
    }
 }
//��Ϸ�˳�����
int Monster::quitGame(){

    //getCtrl(name,baseMsg[7]);
    return 0;
}
//ս����ʽ��Ѫ�����ٶȵ�Ӱ��
int *Monster::battleWay(int way){
    int sub[2];//0Ϊ����Ѫ�� 1λ�ٶ� Ѫ�����ٶ�����ɸ����
    switch(way){
        case 1://��ͨ����
            sub[0] = 50;
            sub[1] = 3;
            break;
        case 2://��������
            sub[0] = 60;
            sub[1] = 4;
            break;
        case 3://����������
            sub[0] = 70;
            sub[1] = 5;
            break;
        case 4://���׷�������
            sub[0] = 80;
            sub[1] = 6;
            break;
        default:
            cout << "û�и�ս����ʽ" << endl;
            sub[0] = 0;
            sub[1] = 0;
            break;
    }
    //return sub[2];
}
//ս������  status 1 ���� ���� �ܵ�����
int Monster::battle(string name,int baseMsg[],int status){
    int *sub;
    cout << "��ǰѪ��Ϊ��" << baseMsg[2] << endl;
    cout << "��ǰ�ٶ�Ϊ��" << baseMsg[4] << endl;
    sub = battleWay(baseMsg[3]);
    cout << "��ǰѪ��Ϊ1��" << *(sub + 0) << endl;
    cout << "��ǰ�ٶ�Ϊ1��" << *(sub + 1) << endl;
    if(status == 1){
        baseMsg[2] += sub[0];//Ѫ��
        baseMsg[4] -= sub[1];//�ٶ�
    }else{
        baseMsg[2] -= sub[0];
        baseMsg[4] += sub[1];
    }
    cout << "��ǰѪ��Ϊ��" << baseMsg[2] << endl;
    cout << "��ǰ�ٶ�Ϊ��" << baseMsg[4] << endl;
    if(baseMsg[2] <=0){
        cout << name_c << "����" << endl;
        return 0;
    }
}
//���Ӿ���ֵ
int Monster::addExp(int baseMsg[],int subExp){
    return baseMsg[5]+subExp;
}

int useClass();
int main(){
    useClass();
}

int useClass(){

    string name1 = "moster1";
    string name2 = "moster2";
    int sub[2];
    //0����ID��1����Ѫ����2���������������3�����ĸ�����������ʽ��4�����ʼ�ٶȡ�5���ﵱǰ���顢6����ȼ�
    static int baseMsg1[7] = {1,100,10,3,10,0,0};
    static int baseMsg2[7] = {2,100,10,2,10,0,0};
    Monster Monster1(name1,baseMsg1);
    Monster Monster2(name2,baseMsg2);

    if(Monster1.baseMsg_c[4] > Monster2.baseMsg_c[4]){
        Monster1.battle(name1,baseMsg1,1);
        Monster2.battle(name2,baseMsg2,2);
    }else{
        Monster2.battle(name2,baseMsg2,1);
        Monster1.battle(name1,baseMsg1,2);
    }

}
