/**
 *  package.hpp
 *  mycpp
 *  背包类头文件
 *  Created by dewey on 2018/11/24.
 *  Copyright © 2018年 dewey. All rights reserved.
**/

#ifndef package_hpp
#define package_hpp

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <cmath>

using namespace std;

#endif /* package_hpp */
class Package
{
public:
    int goodsNum;//物品数量
    int page;//背包页数
    int size;//背包单页格子数目

public:
    bool DisplayMaterials(vector<string> goods,size_t page,size_t pageSize,vector<vector<int>>&goodsArrt);//物品展示
    bool UserParcelop(vector<string> goods,int goodskey,int goodsNums,vector<string>&resUseMaterials);//物品使用
    bool AddMaterials(vector<string> goods,int goodskey,int goodsNums,vector<string>&resAddMaterials);//新增物品
    bool DelMaterials(vector<string> goods,int goodskey,int goodsNums,vector<string>&resDelMaterials);//删除物品

private:
    int* split(string str,char c,int resArr[2]);
};

