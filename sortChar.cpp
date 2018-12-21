#include <iostream>
#include <string>
#include <cctype>


/**
 * @title: 设计程序，提示用户输入一串任意字符，然后程序将字母按照字母表的顺序排序，并输出，其他非字母字符则不输出。
 * @author : dewey
 * @time : 2018-10-25
 * @param : str string 待排序的字符串
 **/
using namespace std;

int main()
{
    string str;
    string strret;
    string change;
    int length;

    START:
        cout << "请输入待排序的字符串：" << endl;
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
        for(j=0;j<lennum;j++){//冒泡
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

