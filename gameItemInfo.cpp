#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

/**
 * @title:不死鸟之眼”是某游戏的一件游戏道具，设计程序，提示用户输入当前最大生命值，以及当前血量，程序输出当前道具的被动提供的生命回复效果。（以每秒为时间单位显示回复效果）
 *      被动效果：每损失10%的生命值，收到的所有治疗效果额为增加6%
 * @author: dewey
 * @param : totleBlood double 英雄最大生命值
 * @param : remainBlood double 英雄当前血量
 **/
double gemeItemInfo(double totleBlood, double remainBlood);

int main(){
    double totleBlood;
    double remainBlood;
    cout << "please press the totleBlood:" << endl;
    cin >> totleBlood;
    cout << "please press the remainBlood:" << endl;
    cin >> remainBlood;
    cout << "get the result :" << endl;
    gemeItemInfo(totleBlood,remainBlood);
}

//英雄回血执行函数
double gemeItemInfo(double totleBlood, double remainBlood){
    while(remainBlood<totleBlood){
        int lossBlood = floor(((totleBlood-remainBlood)/totleBlood)*10);//获取补血倍数
        double addBlood = 100*6*lossBlood/100; //单次加血量 因改装备加血为100，没有提供是否有其他加血来源，故默认血量回复基础值为100
        remainBlood = 100+remainBlood+addBlood; //当前最新血量
        if(remainBlood>=totleBlood){
            remainBlood = totleBlood;
        }
        cout << "当前被动提供的血量：" << addBlood << endl;
        cout << "只有该装备时当前英雄血量：" << remainBlood << endl;
        cout << endl;
        Sleep(1000);//每秒回血时间控制  为windows环境
    }
    return 0;
}
