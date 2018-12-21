#include <iostream>
#include <string>

/**
 * @title: 比较连个字符串的异同
 * @author : dewey
 * @time : 2018-10-22
 * @param : word1 string 英文字符串1
 * @param : word2 string 英文字符串2
 **/
using namespace std;

int main()
{
    string word1;
    string word2;
    int length1;//字符串1长度
    int length2;//字符串2长度
    int tag = 0;//两个字符串比较后的结果状态
START:
    cout << "请输入字符串1:" << endl;
    getline(cin, word1);
    cout << "请输入字符串2:（输入‘exit’ 退出程序）" << endl;
    getline(cin, word2);
    length1 = word1.length();
    length2 = word2.length();
    if(length1 > 10 || length2 > 10){
        cout << "字符串长度应在10以内" << endl;
        return 0;
    }
    cout << "字符串长度分别为:" << endl;
    cout << word1 << ":" << length1 << endl;
    cout << word2 << ":" <<length2 << endl;

    if(length1 == length2){//字符串长度相等
        for(int i=0;i<length1;i++){
            if(word1[i] != word2[i]){
                if((int)word1[i] != (int)word2[i]+32 && (int)word1[i]+32 != (int)word2[i]){
                    tag = 4;//不同字符串

                }
                if((int)word1[i] == (int)word2[i]+32 || (int)word1[i]+32 == (int)word2[i]){
                    tag = (tag == 0) ? 3 : tag;//字符串相同，大小写不同

                }
            }
        }
        tag = (tag == 0) ? 2 : tag;//完全相同
    }else{
        tag = 1;//字符串长度不相等

    }
    cout << tag << endl;
    if(word2 == "exit" ){
        return 0;
    }else{
        tag = 0;
        goto START;
    }

}
