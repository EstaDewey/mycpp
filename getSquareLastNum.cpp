#include <iostream>
#include <math.h>

using namespace std;

/**
 *  @title : 625������ֺ��ر�625��ƽ������390625���պ���ĩ3λ��625��������625��������������λ�������������
 *  @author: dewey
 *  @time : 2018-10-08
 *  @param : num int
 **/
int main(){
    int num;
    cout << "������һ������֤����λ��:������-1 �õ���λ��������ƽ������λ���ڱ����ȫ�����֣�" << endl;
    cin >> num;
    if(num == -1){
        for(int i=100;i<1000;i++){
            if((i*i)%1000 == i){
                cout << i << endl;
            }
        }
    }else{
        if( num > 999 || num < 100 ){
            cout << "������λ��" << endl;
            return 0;
        }
        if((num*num)%1000 == num){
            cout << num << "��ƽ���ǣ�" << (num*num) << "��β��Ϊ " << (num*num)%1000 << "����������" << endl;
        }else{
            cout << num << "��ƽ���ǣ�" << (num*num) << "��β��Ϊ " << (num*num)%1000 << "������������" << endl;
        }
    }
    return 0;

}
