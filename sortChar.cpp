#include <iostream>
#include <string>
#include <cctype>


/**
 * @title: ��Ƴ�����ʾ�û�����һ�������ַ���Ȼ�������ĸ������ĸ���˳�����򣬲��������������ĸ�ַ��������
 * @author : dewey
 * @time : 2018-10-25
 * @param : str string ��������ַ���
 **/
using namespace std;

int main()
{
    string str;
    string strret;
    string change;
    int length;

    START:
        cout << "�������������ַ�����" << endl;
        cin >> str;
        if(str == "exit" ){
            return 0;
        }
        length = str.length();

        int arr[length];
        int j = 0,lennum;
        for(int i=0; i<length; i++){
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
                change[j++]=str[i];
            }
        }
        lennum = j;
        for(j=0;j<lennum;j++){//ð��
			for(int i=0;i<lennum-1-j;i++){
			    if((int)change[i] > (int)change[i+1]){
				    char tmp=change[i];
					change[i]=change[i+1];
					change[i+1]=tmp;
				}
			}
		}
        j = 0;
        for(int i=0;i<length;i++){
			if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
				cout << change[j++];
			}
		}
		cout << endl;
    goto START;

}

