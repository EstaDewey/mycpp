#include <iostream>
#include <string>

/**
 * @title: 设计程序，该程序调用一个函数。这个函数实现一个循环输出 单个 字符的功能。程序两次调用这个函数，
 *         每次调用完毕都要输出这个函数中的字符打印函数目前为止一共被执行了多少次？
 *         （可以让两次调用分别输出已定义好的数组中的字符）
 * @author : dewey
 * @time : 2018-11-01
 * @param : words string 英文字符串
 **/
using namespace std;
int circulationChar(string words);
int main()
{
    string words;//字符串1长度
    static int times;
    static int timesf;
START:
    cout << "请输入任意字符串(输入exit 退出):" << endl;
    if(cin >> words){
        if(words == "exit")return 0;
        timesf += circulationChar(words);
        cout << endl;
        cout << "函数执行次数：" << ++times << endl << endl;
        cout << "打印字符次数：" << timesf << endl << endl;
        timesf += circulationChar(words);
        cout << endl;
        cout << "函数执行次数：" << ++times << endl;
        cout << "打印字符次数：" << timesf << endl;
    }
goto START;

}
//单个输出字符函数
int circulationChar(string words){
    int times_f = 0;
    for(int i=0;i<words.length();i++){
        cout << " " << words[i] << endl;
        times_f++;
    }
    return times_f;
}
