#include <iostream>
#include <string>
/**
 * @title: ��д������ʾ�û��������������������ڶ���������2~10��Χ�ڣ�Ȼ������Եڶ���������ָ���Ľ��ƴ�ӡ��һ����������ֵ
 * @author : dewey
 * @time : 2018-10-16
 * @param : num int Ҫת���������Ƶ�����
 * @param : converNum int ��Ӧ����
 * @param : times int ִ�д���
 **/
using namespace std;

int conversionOfNum(int num, int converNum);
int main(){
    int num;
    int converNum;
    string ret;
    int times;

    if(times>0){
        cout << "��������Ҫִ�еĴ�����" << endl;
        cin >> times;
        for(int k=0;k<times;k++){
            cout << "������Ҫת��������" << endl;
            if(cin >> num){
                cout << "������Ҫת���Ľ�����" << endl;
                cin >> converNum;
                if(converNum <2 || converNum > 10){
                  cout << "������2~10֮�������" << endl;
                  return 0;
                }else if(converNum == 10 || num<converNum){//ʮ�������ԭʼ��ֵ
                    cout << num << "ת��Ϊ" << converNum << "������Ϊ��" << num << endl;
                     cout << endl << "----------------" << endl << endl;
                }else{
                    cout << num << "ת��Ϊ";
                    conversionOfNum(num, converNum);
                }
            }else{
                cout << "����������" << endl;
                return 0;
            }
        }
    }
}
//���ն�Ӧ����ת������Ӧ������ ���ܺ���
int conversionOfNum(int num, int converNum){
    char newNum[converNum];
    int m,n;
    string ret;
    for(int i=0;i<converNum;i++)newNum[i]=i+48;
    while(num >= converNum)
    {
        n = num/converNum;
        m = num%converNum;
        ret += newNum[m];
        num = n;
    }
    ret += newNum[n];
    cout << converNum << "������Ϊ��" ;
    for(int i=ret.length()-1;i>=0;i--)cout<<ret[i];
    cout << endl;
    cout << endl << "----------------" << endl << endl;
    return 0;
}
