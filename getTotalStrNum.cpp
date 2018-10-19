#include <iostream>
#include<cstring>
using namespace std;

/**
 * @title ：设计程序，提示用户输入一行字符。程序分别统计出其中英文字母、空格、数字和其他字符的个数
 * @author : dewey
 * @param : str
 **/
int main(){
    char str[300];
    int length = 0;//字符串长度
    int wordUpper = 0;//大写字符数
    int wordLower = 0;//小写字符数
    int space = 0;//空格数
    int num = 0;//数字数
    int otherChar = 0;
    cout << "请输入一行字符：" << endl;
    //cin >> str;
    cin.getline(str,512);
    length = strlen(str);
    if(length > 300){
        cout << "字符串过长，请缩短字符串长度" << endl;
        return 0;
    }
    cout << length << endl;
    for(int i=0; i<length;i++ ){
        if((int)str[i]>64 && (int)str[i]<91 ){//统计大写字母个数
            wordUpper++;
        }else if((int)str[i]>96 && (int)str[i]<123){//统计小写字母个数
            wordLower++;
        }else if(str[i] == 32){//统计空格数
            space++;
        }else if((int)str[i]>47 && (int)str[i]<58){//统计数字个数
            num++;
        }else{//统计其他字符
            otherChar++;
        }
    }

    cout << "您输入的字符串长度为" << length << endl;
    cout << "大写字母个数为：" << wordUpper
         << "；小写字母个数为：" << wordLower
         << "；数字个数为：" << num
         << "；空格个数为：" << space
         << "；其他字符个数为：" << otherChar
    << endl;
}
