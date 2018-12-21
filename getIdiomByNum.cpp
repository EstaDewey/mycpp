#include <iostream>
#include <string>


/**
 * @title: 设计程序，提示用户输入1~7的数字，程序输出以数字开头的成语：如：1对应一帆风顺、2对应2话不说。如果用户的输入不合法。要能妥善处理错误的输入。并提示用户
 * @author : dewey
 * @time : 2018-10-26
 * @param : int num 要求输入的数字
 **/
using namespace std;

int main()
{
    string str[7] = {"一飞冲天","二龙戏珠","三阳开泰","四喜临门","五福临门","六六大顺","七上八下"};
    int num;

    START:
        cout << "请输入一个1~7的数字,退出请输入0" << endl;
        cin >> num;
        if(num == 0 ){
            return 0;
        }
        if(num < 1 || num > 7){
            cout << "请输入1~7之间的数字" << endl;
            goto START;
        }
        cout << str[num-1] << endl;
    goto START;
}

