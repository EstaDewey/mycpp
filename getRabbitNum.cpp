#include <iostream>
#include <math.h>

/**
 * @title:�ŵ����⣺��һ�����ӣ��ӳ����Ժ����������ÿ���¶���һ�����ӣ�С���ӳ����������º�����һ�����ӣ��������Ӷ���������ÿ�����ж���ֻ���ӡ�
 * @author : dewey
 * @time : 2018-09-21
 * @param : mouthNum int �������·�
 **/
using namespace std;

int main(){
    int rabbitNum;
    int mouthNum;
    cout << "�������·�:" << endl;
    cin >> mouthNum;

    if(mouthNum <1){
        cout << "�·����������ȷ�ϡ���" << endl;
    }else if(mouthNum < 3){
        cout << "��ǰÿ����2ֻ���ӡ�" << endl;
    }else{
        cout << "��1���£�����2ֻ���ӡ�" << endl;
        for(int i=1;i<=mouthNum-1;i++){  //���ӳ�������¿�ʼ����Ϊ2��ָ����
            rabbitNum = pow(2,i);
            cout << "��" << i+1 <<"���£�����" << rabbitNum << "ֻ���ӡ�" << endl;
        }
    }
}
