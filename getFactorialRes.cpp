#include <iostream>

/**
 * @tital :编写程序，提示用户输入一个数字，利用 递归的方法输出这个数字的阶乘和，如用户输入5，程序输出5！的结果。程序应当能判断非法的输入（如-5，q），并提示用户输入正确的值。
 * @author :dewey
 * @time : 2018-10-11
 * @param : num int 输入要求的阶乘值
 **/
using namespace std;
long getFactorialRes(int num);
int main(){
    int num;
    long res;
    cout << "请输入要求的阶乘数：" << endl;
    if(cin >> num){
        if(num <= 0){
            cout << "请输入正整数，谢谢！" << endl;
            return 0;
        }
        res = getFactorialRes(num);
        cout << res << endl;
        return 0;
    }else{
        cout << "请输入整型，谢谢！" << endl;
        return 0;
    }


 }


 long getFactorialRes(int num){
     long res;
     if(num == 1){
        return 1;
     }else{
        res = num * getFactorialRes(num-1);
     }
     return res;
 }
