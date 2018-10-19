#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

/**
 * @title: 设计一个模拟天气预报的程序，只不过这个程序的信息是程序随机生成的，打开程序后程序显示如下信息
 *         1、当天的温度（-20~42）
 *         2、当天的天气状况（雨、雪、晴）
 *         3、当日的风级：（0~12级）
 *         不必显示让用户选择想要查看信息的菜单，程序直接显示这些信息即可，虽然天气信息是随机打印的，
 *         但还是要注意一些现实规则：例如当温度为零下时，天气状况不可能为雨。
 * @author : dewey
 * @time : 2018-10-18
 **/
using namespace std;

int Random(int m,int n);
int main(){
    string weather;
    int temperture;
    int wind;

    cout << "今天温度为: " << endl;
    temperture = Random(-20,40);
    cout << temperture << endl;
    cout << "当天的天气状况: " << endl;
    if(temperture<0){
        weather = (Random(1,2) == 1) ? "雪" : "晴";
    }else{
        weather = (Random(2,3) == 3) ? "雨" : "晴";
    }
    cout << weather << endl;
    cout << "当日的风级: " << endl;
    wind = Random(0,12);
    cout << wind << endl;
}


int Random(int m,int n){
    int pos, dis;
    srand((unsigned)time(0));
    if(m == n)
    {
        return m;
    }
    else if(m > n)
    {
        pos = n;
        dis = m - n + 1;
        return rand() % dis + pos;
    }
    else
    {
        pos = m;
        dis = n - m + 1;
        return rand() % dis + pos;
    }
}

