#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

/**
 * @title:������֮�ۡ���ĳ��Ϸ��һ����Ϸ���ߣ���Ƴ�����ʾ�û����뵱ǰ�������ֵ���Լ���ǰѪ�������������ǰ���ߵı����ṩ�������ظ�Ч��������ÿ��Ϊʱ�䵥λ��ʾ�ظ�Ч����
 *      ����Ч����ÿ��ʧ10%������ֵ���յ�����������Ч����Ϊ����6%
 * @author: dewey
 * @param : totleBlood double Ӣ���������ֵ
 * @param : remainBlood double Ӣ�۵�ǰѪ��
 **/
double gemeItemInfo(double totleBlood, double remainBlood);

int main(){
    double totleBlood;
    double remainBlood;
    cout << "please press the totleBlood:" << endl;
    cin >> totleBlood;
    cout << "please press the remainBlood:" << endl;
    cin >> remainBlood;
    cout << "get the result :" << endl;
    gemeItemInfo(totleBlood,remainBlood);
}

//Ӣ�ۻ�Ѫִ�к���
double gemeItemInfo(double totleBlood, double remainBlood){
    while(remainBlood<totleBlood){
        int lossBlood = floor(((totleBlood-remainBlood)/totleBlood)*10);//��ȡ��Ѫ����
        double addBlood = 100*6*lossBlood/100; //���μ�Ѫ�� ���װ����ѪΪ100��û���ṩ�Ƿ���������Ѫ��Դ����Ĭ��Ѫ���ظ�����ֵΪ100
        remainBlood = 100+remainBlood+addBlood; //��ǰ����Ѫ��
        if(remainBlood>=totleBlood){
            remainBlood = totleBlood;
        }
        cout << "��ǰ�����ṩ��Ѫ����" << addBlood << endl;
        cout << "ֻ�и�װ��ʱ��ǰӢ��Ѫ����" << remainBlood << endl;
        cout << endl;
        Sleep(1000);//ÿ���Ѫʱ�����  Ϊwindows����
    }
    return 0;
}
