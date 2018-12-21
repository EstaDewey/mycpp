
#ifndef ADVENTURE_H_INCLUDED
#define ADVENTURE_H_INCLUDED

/*
简介:探索函数定义
作者：FRP - 史莱姆
创建时间:2018/10/2
*/

#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<string>
#include "Choicepet.h"

using namespace std;

/**探索*/
int PetAdventure(int hp,string race,int action,string name);

/**探索丛林*/
int AdtJungle(int hp,int action,string name,string race);

/**探索海边*/
int AdtSeaside(int hp,int action,string name,string race);

/**探索深山*/
int AdtRemotemountains(int hp,int action,string name,string race);

/**探索树叶*/
int Adtleaf(int hp,int action,string name,string race);

/**探索花朵*/
int Adtflower(int hp,int action,string name,string race);

/**探索树*/
int AdtTree(int hp,int action,string name,string race);

/**探索海底*/
int AdtSeabed(int hp,int action,string name,string race);

/**探索超市*/
int AdtSupermarket(int hp,int action,string name,string race);

/**探索饭店*/
int AdtRestaurant(int hp,int action,string name,string race);

/**探索实验室*/
int AdtLab(int hp,int action,string name,string race);

/**探索平原*/
int AdtFlatlands(int hp,int action,string name,string race);

/**探索下水道*/
int AdtSewer(int hp,int action,string name,string race);

/**随机减少生命*/
int RandEvent();

/**随机获得行动点*/
void RandEvent2();

/**显示获得物品*/
void DisPlay(string race,int y);

/**显示食物属性*/
void FindAttribute(string race,int y);

/**显示获得食物名称*/
void FindFoodNames(string race,int y);

/**显示食物介绍*/
void FindFoodIntroduce(string race,int y);

/**获得物品*/
void FindFood(int there);

/**探索互动*/
int ExploringLnteraction();

/**组长 浅挚*/
extern int MonsterQianzhi[3];




#endif // ADVENTURE_H_INCLUDED
