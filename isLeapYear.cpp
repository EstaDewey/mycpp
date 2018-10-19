#include <iostream>
using namespace std;

/**
 * @title：提示用户输入一个年份，程序判断并输出该年是否为闰年
 * @author： dewey
 * @time ：2018-09-19
 * @param ：yearNum int 需要判断的年份
 **/
int main(){
    int yearNum;
    cout << "please press the num of leap year:" << endl;
    cin >> yearNum;

    if(yearNum%4 == 0 && yearNum%100 != 0){ //闰年判断规则
        cout << yearNum << "年是闰年" << endl;
    }else{
        cout << yearNum << "年不是闰年" << endl;
    }
}
