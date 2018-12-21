#include <iostream>
#include <string>


/**
 * @title: 编写一个程序，反序显示命令行参数的单词。例如。命令行参数是 see you later,该程序应打印later you see
 * @author : dewey
 * @time : 2018-11-02
 * @parpm : instr string 输入要倒序的字符串
 **/

using namespace std;


int main(){
    string instr;
    //string* outstr;
    string resString;
    cout << "请输入要倒序的字符串" << endl;
    getline(cin,instr);
    cout << instr.find(" ");
    num = count(instr.begin(),instr.end(),' ');
    cout << num;
    return 0;
}


