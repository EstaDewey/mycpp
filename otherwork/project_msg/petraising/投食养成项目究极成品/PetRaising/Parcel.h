#ifndef PARCEL_H_INCLUDED
#define PARCEL_H_INCLUDED

/*
简介:背包函数定义
作者:FRP - 威
创建时间:
*/

#include <iostream>
#include <string>
#include "Adventure.h"
#include "Choicepet.h"
#include "Attribute.h"

using namespace std;


/**背包*/
int UserParcel();
/**背包物品增减*/
int UserParcelop(int num,int discard,int employ,int get);
/**退出背包*/
int ExitParcel();
/**显示物品*/
int DisplayMaterials();
/**退出显示物品*/
int ExitDisplayMaterials();
/**宠物反馈总函数*/
int Petreflect(int reflect,int num);
/**宠物喂食反馈*/
int PetFeedReflect(int num);
/**背包数组*/
extern int parcel[10][2];//

#endif // PARCEL_H_INCLUDED
