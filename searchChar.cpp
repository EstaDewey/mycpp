#include <iostream>
#include <string>


/**
 * @title: 设计程序，询问用户打算输入几个（N）字符串（默认限制最大输入10个字符串，每个字符串大小不超过20字符），随后，程序依次读取N个字符串。然后，程序实现一个
字符串查找功能，让用户再次输入一个字符串。程序判断之前输入的N个字符串是否存在与这个字符串相同的字串，如果有输出1。否则输出0。
 * @author : dewey
 * @time : 2018-10-25
 * @param : str string 待排序的字符串
 **/
using namespace std;

int main()
{
    string str[10];
    string strret;
    string change;
    int length;

    START:
        for(int i=0;i<10;i++){
            cout << "请输入待排序的字符串：" << endl;
            cin >> str[i];
            if(str[i].length)
        }

        if(str == "exit" ){
            return 0;
        }
}
