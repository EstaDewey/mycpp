#ifndef ATTRIBUTE_H_INCLUDED
#define ATTRIBUTE_H_INCLUDED

/*
简介:基础属性的保存
作者：FRP - 楠子疯
创建时间:2018/10/2
*/
#include "ChoicePet.h"
#include <stdio.h>
#include <string>

using namespace std;

/**种族食物分类数组*/
extern  std::string materials[][13];

/**食物介绍数组*/
extern  std::string mtsIntroduce[50];

/**食物属性数组:第一个是生命值、第二个是饱食度、第三个是武力*/
extern  int mstAttribute[][4];

/**成功探索次数*/
extern int sufulAdventure;

/**成功获得物品次数*/
extern int sufulAcqMatls;

/**成功探索丛林次数*/
extern int sufulJungle;

/**成功探索树木次数*/
extern int sufulTree;

/**成功探索老九超市次数*/
extern int sufulSupermarke;

/**成功探索海底次数*/
extern int sufulSeabed;

/**成功探索下水道次数*/
extern int sufulSewer;

/**成功探索老九餐馆次数*/
extern int sufulRestaurant;

/**成功探索深山次数*/
extern int sufulRetmountains;

extern int parcel [10][2];

void Achievement();

#endif // ATTRIBUTE_H_INCLUDED
