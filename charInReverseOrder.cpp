#include <iostream>
#include <string>


/**
 * @title: ��дһ�����򣬷�����ʾ�����в����ĵ��ʡ����硣�����в����� see you later,�ó���Ӧ��ӡlater you see
 * @author : dewey
 * @time : 2018-11-02
 * @parpm : instr string ����Ҫ������ַ���
 **/

using namespace std;


int main(){
    string instr;
    //string* outstr;
    string resString;
    cout << "������Ҫ������ַ���" << endl;
    getline(cin,instr);
    cout << instr.find(" ");
    num = count(instr.begin(),instr.end(),' ');
    cout << num;
    return 0;
}


