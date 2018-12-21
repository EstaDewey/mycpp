/**
 *  package.cpp
 *  mycpp
 *  背包类
 *  Created by dewey on 2018/11/24.
 *  Copyright © 2018年 dewey. All rights reserved.
**/
#include "package.hpp"

/**
 * 字符串分割函数
 * str string 待分割的字符串
 * c char 分割标识符
 * resArr int 结果存放数组
 **/
int* Package::split(string str, char c,int resArr[2]) {
    int pos;
    string key;
    string num;
    pos = str.find(c);//获取分隔符位置
    key = str.substr(0,pos);//获取物品键值
    num = str.substr(pos+1,str.size());//获取物品数量
    resArr[0] = atol(key.c_str());//字符串转为整型
    resArr[1] = atol(num.c_str());//字符串转为整型
    return resArr;
}

/**物品展示
 * goods string[] 物品大数组
 * page int 第几页
 * pageSize int 每页格子数
 **/
bool Package::DisplayMaterials(vector<string> goods,size_t page,size_t pageSize,vector<vector<int>>&goodsArrt){
    if(page < 1){
        return false;
    }
    int resArr[2];
    //分页相关处理
    size_t pageStart = (page-1)*pageSize;//每页第一个物品key值
    size_t pageTotal = (goods.size()/pageSize)+1;//背包总页数
    size_t pageNum = (pageTotal == page) ? (goods.size()%pageSize) : pageSize;//背包当前页物品个数
    int j=0;
    //字符串转为二维数组
    for(size_t i=pageStart; i<pageStart+pageNum; i++){
        split(goods[i],'|',resArr);
        goodsArrt[j][0] = resArr[0];
        goodsArrt[j][1] = resArr[1];
        j++;
    }
    return true;
}

/**物品使用
 * goods vector<string>[] 物品大数组
 * goodskey int 物品键值
 * goodsNums int 物品数量
 * pageSize vector<string> 结果存放数组
 **/
bool Package::UserParcelop(vector<string> goods,int goodskey,int goodsNums,vector<string>&resUseMaterials){
    if(goodskey < 0  || goodsNums <1){
        return false;
    }
    int resArr[2];
    for(size_t i=0;i<goods.size();i++){
         split(goods[i],'|',resArr);
        if(resArr[0] == goodskey){
            if(resArr[1] >= goodsNums){
                resArr[1] -= goodsNums;
            }else{
                resArr[1] = 0;
            }
        }
        resUseMaterials.push_back(to_string(resArr[0]) + "|" + to_string(resArr[1]));
    }
    return true;
}

/**新增物品
 * goods vector<string>[] 物品大数组
 * goodskey int 物品键值
 * goodsNums int 物品数量
 * pageSize vector<string> 结果存放数组
 **/
bool Package::AddMaterials(vector<string> goods,int goodskey,int goodsNums,vector<string>&resAddMaterials){
    if(goodskey < 0  || goodsNums <1){
        return false;
    }
    int resArr[2];
    for(size_t i=0;i<goods.size();i++){
        split(goods[i],'|',resArr);
        if(resArr[0] == goodskey){
            resArr[1] += goodsNums;
        }
        resAddMaterials.push_back(to_string(resArr[0]) + "|" + to_string(resArr[1]));
    }
    return true;
}

/**删除物品
 * goods vector<string>[] 物品大数组
 * goodskey int 物品键值
 * goodsNums int 物品数量
 * pageSize vector<string> 结果存放数组
 **/
bool Package::DelMaterials(vector<string> goods,int goodskey,int goodsNums,vector<string>&resDelMaterials){
    if(goodskey < 0  || goodsNums <1){
        return false;
    }
    int resArr[2];
    for(size_t i=0;i<goods.size();i++){
        split(goods[i],'|',resArr);
        if(resArr[0] == goodskey){
            if(resArr[1] >= goodsNums){
                resArr[1] -= goodsNums;
            }else{
                resArr[1] = 0;
            }
        }
        resDelMaterials.push_back(to_string(resArr[0]) + "|" + to_string(resArr[1]));
    }
    return true;
}





