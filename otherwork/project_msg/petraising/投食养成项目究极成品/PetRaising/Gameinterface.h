#ifndef GAMEINTERFACE_H_INCLUDED
#define GAMEINTERFACE_H_INCLUDED
/*
简介:游戏界面函数定义
作者:FRP - 楠子疯
创建时间:2018/10/2
*/

#include "ChoicePet.h"
#include "Demise.h"
#include "Adventure.h"
#include "gameInterface.h"
#include "Attribute.h"
#include "Parcel.h"
#include "PetFeed.h"

using namespace std;

/**游戏开始界面*/
int StartScreen();

void ShowAttribute();

/**游戏选择界面*/
void GameInterface();

#endif // GAMEINTERFACE_H_INCLUDED
