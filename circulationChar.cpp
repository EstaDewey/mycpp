#include <iostream>
#include <string>

/**
 * @title: ��Ƴ��򣬸ó������һ���������������ʵ��һ��ѭ����� ���� �ַ��Ĺ��ܡ��������ε������������
 *         ÿ�ε�����϶�Ҫ�����������е��ַ���ӡ����ĿǰΪֹһ����ִ���˶��ٴΣ�
 *         �����������ε��÷ֱ�����Ѷ���õ������е��ַ���
 * @author : dewey
 * @time : 2018-11-01
 * @param : words string Ӣ���ַ���
 **/
using namespace std;
int circulationChar(string words);
int main()
{
    string words;//�ַ���1����
    static int times;
    static int timesf;
START:
    cout << "�����������ַ���(����exit �˳�):" << endl;
    if(cin >> words){
        if(words == "exit")return 0;
        timesf += circulationChar(words);
        cout << endl;
        cout << "����ִ�д�����" << ++times << endl << endl;
        cout << "��ӡ�ַ�������" << timesf << endl << endl;
        timesf += circulationChar(words);
        cout << endl;
        cout << "����ִ�д�����" << ++times << endl;
        cout << "��ӡ�ַ�������" << timesf << endl;
    }
goto START;

}
//��������ַ�����
int circulationChar(string words){
    int times_f = 0;
    for(int i=0;i<words.length();i++){
        cout << " " << words[i] << endl;
        times_f++;
    }
    return times_f;
}
