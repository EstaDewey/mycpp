#include <iostream>
#include <cmath>

/**
 * @title : ������ĸ�������һЩ������ͼ�Σ����������һ�����ӣ�
 * ABCDEFG
 * BABCDEF
 * CBABCDE
 * DCBABCD
 * EDCBABC
 * ����һ��5��7�е�ͼ�Σ����ҳ����ͼ�εĹ��ɣ������һ��n��m�е�ͼ�Ρ�
 * �����ʽ
 * ����һ�У�������������n��m���ֱ��ʾ��Ҫ�����ͼ�ε�������������
 * �����ʽ
 * ���n�У�ÿ��m���ַ���Ϊ���ͼ�Ρ�
 * ���ݹ�ģ��Լ��  1 <= n, m <= 26��
 * @author : dewey
 * @time : 2018-09-28
 * @param : n int ��
 * @param : m int ��
 **/

 using namespace std;

 int getWordPic(int n,int m);
 int main(){
    int n;
    int m;
    cout << "������������" << endl;
    cin >> n;
    if(n<1){
        cout << "�������n����С��1��" << endl;
        return 0;
    }
    cout << "������������" << endl;
    cin >> m;
    if(m>26){
        cout << "�������m���ܴ���26��" << endl;
        return 0;
    }

    getWordPic(m,n);
    return 0;

 }

int getWordPic(int m,int n){
    char a='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cout<< (char)(a+abs(i-j));
        }
        cout << endl;
    }

    return 0;
}
