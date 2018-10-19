#include <iostream>
#include <string>
/**
 * @title: 编写程序：提示用户输入两个整数参数，第二个参数在2~10范围内，然后程序以第二个参数中指定的进制打印第一个参数的数值
 * @author : dewey
 * @time : 2018-10-16
 * @param : num int 要转成其他进制的整数
 * @param : converNum int 对应进制
 * @param : times int 执行次数
 **/
using namespace std;

int conversionOfNum(int num, int converNum);
int main(){
    int num;
    int converNum;
    string ret;
    int times;

    if(times>0){
        cout << "请输入想要执行的次数：" << endl;
        cin >> times;
        for(int k=0;k<times;k++){
            cout << "请输入要转换的整数" << endl;
            if(cin >> num){
                cout << "请输入要转换的进制数" << endl;
                cin >> converNum;
                if(converNum <2 || converNum > 10){
                  cout << "请输入2~10之间的整数" << endl;
                  return 0;
                }else if(converNum == 10 || num<converNum){//十进制输出原始数值
                    cout << num << "转换为" << converNum << "进制数为：" << num << endl;
                     cout << endl << "----------------" << endl << endl;
                }else{
                    cout << num << "转换为";
                    conversionOfNum(num, converNum);
                }
            }else{
                cout << "请输入整数" << endl;
                return 0;
            }
        }
    }
}
//按照对应进制转换成相应进制数 功能函数
int conversionOfNum(int num, int converNum){
    char newNum[converNum];
    int m,n;
    string ret;
    for(int i=0;i<converNum;i++)newNum[i]=i+48;
    while(num >= converNum)
    {
        n = num/converNum;
        m = num%converNum;
        ret += newNum[m];
        num = n;
    }
    ret += newNum[n];
    cout << converNum << "进制数为：" ;
    for(int i=ret.length()-1;i>=0;i--)cout<<ret[i];
    cout << endl;
    cout << endl << "----------------" << endl << endl;
    return 0;
}
