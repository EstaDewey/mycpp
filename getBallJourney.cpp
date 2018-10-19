#include <iostream>

/**
 * @title: 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
 * @author : dewey
 * @time : 2018-10-17
 * @param : heigth int 球的起始高度
 * @param : times int 球落地次数
 **/
using namespace std;

int getBallJourney(double heigth, int times);
int main(){
    double heigth;
    int times;

    cout << "请输入球的起始高度" << endl;
    if(cin >> heigth && heigth >0){
        cout << "请输入球落地次数" << endl;
        if(cin >> times && times > 0){
            getBallJourney(heigth,times);
        }else{
            cout << "请输入正整数" << endl;
            return 0;
        }
    }else{
        cout << "请输入正整数" << endl;
        return 0;
    }

}

//计算球掉落的相关数据函数
int getBallJourney(double heigth, int times){
    double startHeigth = heigth;
    double presentHeigth = 0;
    double totalMeter = (double)heigth;
    double myTrueMeter = (double)heigth;
    int totalTimes = 0;
    while(heigth>0){
        totalMeter += (double)heigth/2;
        totalTimes++;
        if(totalTimes <= times){
            myTrueMeter += (double)heigth/2;
        }
        heigth = heigth/2;
        if(totalTimes == times){
            presentHeigth = heigth;
        }
    }
    cout << "球从" << startHeigth << "米落下共经过" << totalTimes << "次后不再弹起。共经过" << totalMeter << "米" << endl;
    if(times > totalTimes){
        cout << "球从这个高度落下最多只能弹起" << totalTimes << "次" << endl;
        cout << "球从" << startHeigth << "米落下经过指定" << totalTimes << "次后共经过" << myTrueMeter << "米,当前反弹高度为" << presentHeigth << "米" << endl;
    }else{
        cout << "球从" << startHeigth << "米落下经过指定" << times << "次后共经过" << myTrueMeter << "米,当前反弹高度为" << presentHeigth << "米" << endl;
    }
    return 0;
}
