#include <iostream>
#include <math.h>

/**
 * @explain : 题目：有1、2、3、4四个数字。能组成多少个互不相同且无重复数字的三位数？都是多少？
            要求： 编写一个程序，判断出能组成的数字的个数，并输出各个数字。
 * @author:dewey
 * @time : 2018-09-25
 * @param : num int 显示数字的位数
 * @param : totleFigure int 数字个数
 * @param : first arr 数字存放数组
 **/
using namespace std;

int getDiffNum(int first,int start,int endFigure,int figure[],int totleFigure);
int getTimes(int totleFigure);
int getResult(int num,int totleFigure, int figure[]);
int main(){
    int figure[4];
    int num;
    int totleFigure;
    int j = 0;
    int n;
    cout << "press the num :" << endl;
    cin >> num;
    cout << "press the totleFigure :" << endl;
    cin >> totleFigure;
    cout << "press the figure : " << endl;
    for(int i=0;i<totleFigure;i++){
        cin >> figure[i];
    }
    n = getTimes(totleFigure);//获取排列组合个数
    cout << "共" << n << "个数" << endl;
    getResult(num,totleFigure,figure);
}

/**
 * @explain : 求1阶乘 为计算数字总数
 * @param : totleFigure int 数字个数
 **/
int getTimes(int totleFigure){
    int n=1;
    for(int i=1;i<=totleFigure;i++){
        n *= i;
    }
    return n;
}

/**
 * @explain : 提出第一位数字
 * @param : num int 数字个数
 * @param : totleFigure int 数字总数
 * @param : figure arr 排列组合数组
 **/
int getResult(int num,int totleFigure, int figure[]){
    int start;
    int diffNum[3];
    int first;

    for(int i=0;i<totleFigure;i++){
        if(i!=0){swap(figure[0],figure[i]);}
        for(int j=0;j<3;j++){
            diffNum[j] = figure[j+1];
        }
        first = figure[0];
        getDiffNum(first,0,num-1,diffNum,totleFigure-1);
        cout << endl;
    }


}

/**
 * @explain : 获取三个数字的排列组合
 * @param : first int 排列组合第一位数字
 * @param : start int 三个数字的排列组合初始数字
 * @param : num int 数字个数
 * @param : diffNum arr 排列组合数组
 * @param : totleFigure int 三个数字的排列组合数字总数
 **/
int getDiffNum(int first,int start,int num,int diffNum[],int totleFigure){

    if(start == totleFigure){
        cout << first;
        for(int i=0;i<num;i++){
            cout << diffNum[i];
        }
        cout << "  ";
    }
    for(int j=start;j<totleFigure;j++){
        swap(diffNum[start],diffNum[j]);
        getDiffNum(first,start+1,num,diffNum,totleFigure);
        swap(diffNum[j],diffNum[start]);
    }
}

