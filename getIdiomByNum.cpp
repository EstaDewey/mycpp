#include <iostream>
#include <string>


/**
 * @title: ��Ƴ�����ʾ�û�����1~7�����֣�������������ֿ�ͷ�ĳ���磺1��Ӧһ����˳��2��Ӧ2����˵������û������벻�Ϸ���Ҫ�����ƴ����������롣����ʾ�û�
 * @author : dewey
 * @time : 2018-10-26
 * @param : int num Ҫ�����������
 **/
using namespace std;

int main()
{
    string str[7] = {"һ�ɳ���","����Ϸ��","������̩","��ϲ����","�帣����","������˳","���ϰ���"};
    int num;

    START:
        cout << "������һ��1~7������,�˳�������0" << endl;
        cin >> num;
        if(num == 0 ){
            return 0;
        }
        if(num < 1 || num > 7){
            cout << "������1~7֮�������" << endl;
            goto START;
        }
        cout << str[num-1] << endl;
    goto START;
}

