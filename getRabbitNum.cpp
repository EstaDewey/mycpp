#include <iostream>
#include <math.h>

/**
 * @title:古典问题：有一对兔子，从出生以后第三个月起每个月都生一对兔子，小兔子长到第三个月后又生一对兔子，假如兔子都不死，问每个月有多少只兔子。
 * @author : dewey
 * @time : 2018-09-21
 * @param : mouthNum int 所计算月份
 **/
using namespace std;

int main(){
    int rabbitNum;
    int mouthNum;
    cout << "请输入月份:" << endl;
    cin >> mouthNum;

    if(mouthNum <1){
        cout << "月份输入错误，请确认……" << endl;
    }else if(mouthNum < 3){
        cout << "当前每月有2只兔子。" << endl;
    }else{
        cout << "第1个月，共有2只兔子。" << endl;
        for(int i=1;i<=mouthNum-1;i++){  //兔子充第三个月开始生产为2的指数倍
            rabbitNum = pow(2,i);
            cout << "第" << i+1 <<"个月，共有" << rabbitNum << "只兔子。" << endl;
        }
    }
}
