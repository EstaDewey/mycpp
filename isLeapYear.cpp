#include <iostream>
using namespace std;

/**
 * @title����ʾ�û�����һ����ݣ������жϲ���������Ƿ�Ϊ����
 * @author�� dewey
 * @time ��2018-09-19
 * @param ��yearNum int ��Ҫ�жϵ����
 **/
int main(){
    int yearNum;
    cout << "please press the num of leap year:" << endl;
    cin >> yearNum;

    if(yearNum%4 == 0 && yearNum%100 != 0){ //�����жϹ���
        cout << yearNum << "��������" << endl;
    }else{
        cout << yearNum << "�겻������" << endl;
    }
}
