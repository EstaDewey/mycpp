/**
 *  main.cpp
 *  mycpp
 *  背包类使用示例  demo
 *  Created by dewey on 2018/11/24.
 *  Copyright © 2018年 dewey. All rights reserved.
**/

#include "main.hpp"


using namespace std;

int main(){
    //参数配置
    vector<string> goods = {"10|2","2|4","0|5"};
    int goodskey = 0;// 物品键值
    int goodsNum = 3;//物品数量
    size_t page = 1;//背包当前页
    size_t pageSize = 2;//每个背包9个格子

    Package pack; //创建背包对象

    cout << "背包显示物品示例：" << endl;
    vector<vector<int>> goodsArrt(goods.size(),vector<int>(2));
    pack.DisplayMaterials(goods,page,pageSize,goodsArrt);
    for(size_t its=0;its < goodsArrt.size();its++){
        for(size_t itsc=0;itsc < goodsArrt[0].size();itsc++){
            if(goodsArrt[its][itsc]!=0){
                cout << "[" << goodsArrt[its][itsc] << "]" ;
            }
        }
        cout  << endl;
    }
    cout << endl << endl;


    cout << "背包使用物品示例：" << endl;
    vector<string> resUseMaterials;
    pack.UserParcelop(goods, goodskey, goodsNum, resUseMaterials);
    for (vector<string>::iterator itu = resUseMaterials.begin(); itu != resUseMaterials.end(); itu++) {
        cout << *itu << endl;
    }
    cout << endl << endl;


    cout << "背包添加物品示例：" << endl;
    vector<string> resAddMaterials;
    pack.AddMaterials(goods, goodskey, goodsNum, resAddMaterials);
    for (vector<string>::iterator ita = resAddMaterials.begin(); ita != resAddMaterials.end(); ita++) {
        cout << *ita << endl;
    }
    cout << endl << endl;


    cout << "背包删除物品示例：" << endl;
    vector<string> resDelMaterials;
    pack.DelMaterials(goods, goodskey, goodsNum, resDelMaterials);
    for (vector<string>::iterator itd = resDelMaterials.begin(); itd != resDelMaterials.end(); itd++) {
        cout << *itd << endl;
    }
    return 0;
}
