//
//  main.cpp
//  mycpp
//
//  Created by 杜威 on 2018/9/26.
//  Copyright © 2018年 dewey. All rights reserved.
//
#include <iostream>
#include <windows.h>
#include <string>
#include "Attribute.h"
#include "Parcel.h"
#include "GameInterface.h"
using namespace std;

int UserParcelop(int num,int discard,int employ,int get); //包裹物品操作函数，新增，使用，丢弃
//int ExitParcel();//包裹推出函数  目前至返回0 如需返回指定页面或函数，商量后做扩展
int displayMaterials(); //物品详情显示函数
int exitDisplayMaterials(); //物品推出函数
int Petreflect(int reflect,int num);//反馈类型函数
int PetFeedReflect(int num);
int parcel[10][2];


int UserParcel() {

    int num; //物品编号，数组key值
    int opt; //执行操作
    int discard; //丢弃
    int employ; //使用
    int get; //新增or获取物品
    cout << endl;
    cout << "宠物当前属性：" << endl;
    cout << "生命值：" << hp << endl;
    cout << "饱食度：" << befull << endl;
    cout << "武力值：" << fighting << endl;
    cout << endl;
    cout << "背包初始状态：" << endl;
	if(parcel[0][1] <= 0){
                cout << "背包为空，请去寻找物品！" << endl;
                return 0;
			}
    for(int j=0;j<10;j++){
        if(parcel[j][0] >0){
            cout << "名称：";
            DisPlay(race,parcel[j][0]-1);
            cout <<"数量：" << parcel[j][1] << endl;
            cout <<"物品编号：" << parcel[j][0]-1 << endl;
            cout << "--------------------------" << endl;
        }else{
            continue;
        }

    }
    for(int i=0;i<=10;i++){
        cout << "请输入物品编号(输入-1退出)：" << endl;
        cin >> num;
        if(num == -1){
           return 0;
        }else if(num > 12 || num < 0){
            cout << "请输入1～12的数字" << endl;
        }

        cout << "请输入所做操作：（其中1为使用，2位丢弃）" << endl;
        cin >> opt;//输入操作类型

        if(opt!=1 && opt!=2 && opt!=3){//对背包物品相关操作
            cout << "请输入1或2" << endl;
            return 0;
        }
        int m = 0;
        for(int n=0;n<10;n++){

            if(parcel[n][0] == num+1 && opt != 3 && parcel[n][0] > 0){
                if(opt == 1){ //使用物品
                    employ = 1;
                    //使用食物给宠物增加对应属性
                    Petreflect(1,num);
                }else{
                    employ = 0;
                }
                if(opt == 2) discard = 1; else discard = 0; //丢弃物品
                if(opt == 3) get = 1; else get = 0; // 获得物品
                UserParcelop(num, discard, employ, get);
				return 0;
            }else{
                m = m+1;
				continue;
            }
        }
        if(m == 10 && opt != 3){
            cout << "想吃的还没有，赶紧出去找吧！" << endl;
            return 0;
        }
        if(opt == 3){ // 获得物品
            get = 1;
            UserParcelop(num, 0, 0, get);
        }

        //显示对应物品
        DisplayMaterials();

        //退出背包
        return 0;


    }
    return 0;
}

/**
 * 背包物品增减操作
 **/
int UserParcelop(int num,int discard,int employ,int get){
       for(int i=0; i<10; i++){
        //背包已有物品 只新增数量
        if(parcel[i][1] > 0 && parcel[i][0] == num + 1){

            if(get == 1) {
                parcel[i][1] = parcel[i][1]+1;//得到相同种类物品增加数量
            }
            if(employ == 1 || discard == 1){ //丢弃或使用时
                if(parcel[i][1] > 0){
                    parcel[i][1] = parcel[i][1]-1; //对对应物品数量进行减1
                    //当物品数量为0时整理包裹
                    if(parcel[i][1] == 0){
                        //整理包裹，填充空位
                        for(int l=0; l<=10-i; l++){
                            if(parcel[i+l+1][0] != 0){
                                parcel[i+l][0] = parcel[i+1][0];
                                parcel[i+l][1] = parcel[i+1][1];
                            }else{
                                parcel[i+l][0] = 0;
                                parcel[i+l][1] = 0;                            }
                        }
                    }
                }else{ //物品数量为0时给出提示
                    cout << "还减？散吧散吧，没了没了！" << endl;
                    return 0;
                }

            }
            return 0;
        }
        //新物品添加到背包新格子中
        if((parcel[i][1] == 0 && parcel[i-1][1] > 0) || (parcel[i][1] == 0 && i == 0)){
            if(get == 1){
                parcel[i][0] = num + 1;
                parcel[i][1] = parcel[i][1]+1;
                return 0;
            }

        }
    }


    return 0;
}

/**
 * 退出背包
 **/
/*int ExitParcel(){
	befull = befull + foodconsumption;
    return 0;
}*/
/**
 * 显示物品
 **/
int DisplayMaterials(){


    for(int g=0; g<10; g++){
        int num1;
        cout << endl;
        cout << "请输入物品编号，查看物品详情：(输入‘-1’退出返回背包，物品查看至多查询10次)" << endl;
        cin >> num1;
        if(num1 == -1){
            return -1;
        }
        if(num1 > 11 || num1 < 0){
            cout << "没有对应物品哦，请确认！！！" << endl;
            return 0;
        }
        int m = 0;
        for(int n=0;n<10;n++){
            if(parcel[n][0] == num1+1 && parcel[n][0] > 0){
                cout << "物品属性值:" << endl;
                FindAttribute(race,num1);
                cout << endl << endl;
                FindFoodIntroduce(race,num1);
            }else{
                m = m + 1;
                continue;
            }
        }
        if(m == 10){
            cout << "您当前还未获得该物品！" << endl;
        }

    }

    return 0;
}

/**
 * 退出显示物品
 **/
int ExitDisplayMaterials(){
    UserParcel();
    return 0;
}

/**
 * 宠物反馈总函数 包含食物反馈和探索反馈
 * @param reflect int 反馈类型 1 为食物反馈
 * @param num int 物品编号 即数组下标
 **/
int Petreflect(int reflect,int num){
    if(reflect == 1){
        PetFeedReflect(num);
    }
    return 0;
}

/**
 * 宠物喂食反馈
 * 功能说明：1 相关属性值增加 2打印反馈
 **/
int PetFeedReflect(int num){
    if(race == "恐龙"){
		cout << "吃前状态：生命:" << hp << ";饱食度:" << befull << ";武力值:" << fighting << endl;
        hp = hp + mstAttribute[num][0];
        befull = befull + mstAttribute[num][1];
        fighting = fighting + mstAttribute[num][2];
        cout << "吃后状态：生命:" << hp << ";饱食度:" << befull << ";武力值:" << fighting << endl;
    } else if(race == "毛毛虫") {
		cout << "吃前状态：生命:" << hp << ";饱食度:" << befull << ";武力值:" << fighting << endl;
        hp = hp + mstAttribute[num+12][0];
        befull = befull + mstAttribute[num+12][1];
        fighting = fighting + mstAttribute[num+12][2];
        cout << "吃后状态：生命:" << hp << ";饱食度:" << befull << ";武力值:" << fighting << endl;
    } else if(race == "海绵") {
		cout << "吃前属性：生命:" << hp << ";饱食度:" << befull << ";武力值:" << fighting << endl;
        hp = hp + mstAttribute[num+24][0];
        befull = befull + mstAttribute[num+24][1];
        fighting = fighting + mstAttribute[num+24][2];
        cout << "吃后状态：生命:" << hp << ";饱食度:" << befull << ";武力值:" << fighting << endl;
    } else {
		cout << "吃前属性：生命:" << hp << ";饱食度:" << befull << ";武力值:" << fighting << endl;
        hp = hp + mstAttribute[num+36][0];
        befull = befull + mstAttribute[num+36][1];
        fighting = fighting + mstAttribute[num+36][2];
        cout << "吃后状态：生命:" << hp << ";饱食度:" << befull << ";武力值:" << fighting << endl;
    }
    return 0;
}
