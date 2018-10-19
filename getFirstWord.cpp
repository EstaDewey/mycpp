#include <iostream>
#include <string>

/**
 * @title: 设计程序，提示用户输入一串任意英文字符 (以行末尾而不是文件结尾来结束输入)，程序接受字符串的第一个单词，并丢弃输入行中的其他字符。
 *         注意！该程序应该跳过第一个非空白字符前面的所有空白。将一个单词定义为没有空白的字符序列。
 * @author : dewey
 * @time : 2018-10-15
 * @param : word string 英文字符串
 **/
using namespace std;

int main(){
    string word;
    cout << "请输入一行英文字符" << endl;
    getline(cin,word,' ');
    cout << word << endl;
    return 0;

}
