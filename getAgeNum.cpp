#include <iostream>
#include <math.h>

/**
 * @title: ĳ������ʶһ���ѡ�
 *        ���ʼ�����ʱ����������˵��
 *        ���ҵ������Ǹ�2λ�����ұȶ��Ӵ�27��,
 *        ������ҵ��������λ���ֽ���λ�ã��պþ����Ҷ��ӵ����䡱
 *        ������㣺���ѵ�����һ���ж����ֿ��������
 *        ��ʾ��30���������һ�ֿ���Ŷ.
 *        ����д��ʾ���������������
 * @author : dewey
 * @param : age int ������������
 * @param : diffAge int ��������
 **/

 using namespace std;

 int main(){
     int age;
     int diffAge;

     cout << "����������Ϊ������������� : " << endl;
     cin >> age;

     if(age > 100){
        cout << "������100���ڵ����֣�" << endl;
        return 0;
     }

     cout << "�������������� : " << endl;
     cin >> diffAge;

     if(diffAge >= age){
        cout << "�������䲻�ܴ��ڵ��������������" << endl;
        return 0;
     }


    cout << "�����������������Ϊ��" << endl << endl;

    for(int i=10;i<age;i++){
        for(int j=0;j<age;j++){
            if(i-j == diffAge){
                if(i%10*10+floor(i/10) == j){
                    cout <<  "��ĸ������Ϊ��" << endl;
                    cout << i << endl;
                    cout <<  "���ӵ�����Ϊ��" << endl;
                    cout << j << endl << endl;
                }
            }
        }
    }
    return 0;
 }
