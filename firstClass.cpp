#include <iostream>
#include <string>
/**
 *  @title: ����һ���࣬����ʾ�����˻������ݳ�Ա���������������˺źʹ��
 *      ��Ա����ִ�����²���:
 *      1.����һ�����󲢳�ʼ��
 *      2.��ʾ�����������˺źʹ��
 *      3.�������ָ���Ĵ��
 *      4.ȡ������ָ���Ŀ���
 *  @author : dewey
 *  @time : 2018-10-11
 *  @param : money double ���
 *  @param : opt int �ʽ����
 **/
using namespace std;
//�˻�������
class GetCount
{
    public:

        GetCount(double money,string name);
        CreateBasicInfo();//�����˺�
        Deposit(double money);//���
        Withdrawal(double money);//ȡ��

    private:
        string name_t;
        string acount;
        static double money_t;

};
// ���캯��
GetCount::GetCount(double money,string name){
    name_t = name;
}
//�˻�������Ϣ��ʾ
int GetCount::CreateBasicInfo(){
    acount = "1102";
    cout << "������" << name_t << endl;
    cout << "�˺ţ�" << acount << endl;
    cout << "��" << money_t << endl;
    return 0;
}
//����
int GetCount::Deposit(double money){
    money_t = money_t+money;
    cout << "���ɹ����룺" << money << "Ԫ" << endl;
    return money_t;
}
//ȡ���
int GetCount::Withdrawal(double money){
    if(money_t >= money){
        money_t = money_t-money;
        cout << "���ɹ�ȡ����" << money << "Ԫ" << endl;
        return money_t;
    }else{
        cout << "����" << endl;
        return 0;
    }


}

double GetCount::money_t = 20.00;

int main(){
    double money; //���
    int opt; //����
    string name = "����"; //�˻���
    cout << "��������" << endl;
    if(cin >> money){
        cout << "������ִ�еĲ�����1����2��ȡ��" << endl;
        cin >> opt;
        if(opt < 1 || opt > 2){
            cout << "������1��2��" << endl;
            return 0;
        }
        GetCount GetCount(money,name);
        if(opt == 1){
            GetCount.Deposit(money);
        }
        if(opt == 2){
            GetCount.Withdrawal(money);//ȡ��
        }
        cout << endl;
        cout << "��ǰ�˻�״̬:" << endl << endl;
        GetCount.CreateBasicInfo();

        return 0;
    }else{
        cout << "�Ƿ����룬��ȷ�ϣ�" << endl;
        return 0;
    }
}
