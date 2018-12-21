#ifndef CHOICEPET_H_INCLUDED
#define CHOICEPET_H_INCLUDED

/*
简介:选择宠物函数定义
作者：FRP - 浅挚
创建时间:2018/10/2
*/


#include<iostream>
#include <stdlib.h>
#include<string>
#include <windows.h>
#include "GameInterface.h"

using namespace std;

    /**种族*/
     extern string race;
    /**名字*/
     extern string name;
    /**宠物体力*/
     extern int hp;
    /**宠物武力*/
     extern int fighting;
    /**宠物饱食度*/
     extern int befull;
    /**宠物食物每天消耗*/
     extern int foodconsumption;
    /**宠物行动*/
     extern int action;
    /**宠物寿命*/
      extern int lifetime ;
    /**宠物生存天数*/
     extern int survivaldays;
    /**宠物饱食度最大值*/
     extern int befull_MAX;
    /**宠物选择*/
     int PetAttribute();

#endif // CHOICEPET_H_INCLUDED
