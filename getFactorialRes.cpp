#include <iostream>

/**
 * @tital :��д������ʾ�û�����һ�����֣����� �ݹ�ķ������������ֵĽ׳˺ͣ����û�����5���������5���Ľ��������Ӧ�����жϷǷ������루��-5��q��������ʾ�û�������ȷ��ֵ��
 * @author :dewey
 * @time : 2018-10-11
 * @param : num int ����Ҫ��Ľ׳�ֵ
 **/
using namespace std;
long getFactorialRes(int num);
int main(){
    int num;
    long res;
    cout << "������Ҫ��Ľ׳�����" << endl;
    if(cin >> num){
        if(num <= 0){
            cout << "��������������лл��" << endl;
            return 0;
        }
        res = getFactorialRes(num);
        cout << res << endl;
        return 0;
    }else{
        cout << "���������ͣ�лл��" << endl;
        return 0;
    }


 }


 long getFactorialRes(int num){
     long res;
     if(num == 1){
        return 1;
     }else{
        res = num * getFactorialRes(num-1);
     }
     return res;
 }
