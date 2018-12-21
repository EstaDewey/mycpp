#include <iostream>
#include <string>

/**
 * @title: 设计一个程序：在主函数中有两个变量x、y。首先在主函数中输出一次x、y的值。调用一个自定义的函数。再在主函数中打印这两个值。此时x、y的值互换。
 * @author : dewey
 * @time : 2018-10-30
 * @param : x int 英文字符串1
 * @param : y int 英文字符串2
 **/
using namespace std;
int changeParam(int x, int y);
int main()
{
    int x,y;//字符串1长度

START:
    cout << "请输入变量x(输入0 退出):" << endl;
    if(cin >> x){
        if(x==0)return 0;
        cout << "请输入变量y" << endl;
        if(cin >> y){
            cout << "x的值为：" << x<< endl;
            cout << "y的值为：" << y<< endl<< endl;
            changeParam(x,y);
        }else{
            return 0;
        }
    }else{
        return 0;
    }
goto START;

}
//变量置换函数
int changeParam(int x, int y){
    int i;
    i=x;
    x=y;
    y=i;
    cout << "x的值为：" << x<< endl;
    cout << "y的值为：" << y<< endl<< endl<< endl;
    return 0;
}
