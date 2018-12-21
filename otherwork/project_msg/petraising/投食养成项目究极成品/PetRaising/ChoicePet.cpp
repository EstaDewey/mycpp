#include <iostream>
#include <windows.h>
#include "ChoicePet.h"

using namespace std;
    /**种族*/
     string race;
    /**名字*/
     string name;
    /**宠物体力*/
     int hp = 0;
    /**宠物武力*/
     int fighting = 0;
    /**宠物饱食度*/
     int befull = 0;
    /**宠物食物每天消耗*/
     int foodconsumption = 0;
    /**宠物行动*/
     int action = 3;
    /**宠物寿命*/
     int lifetime = 64;
    /**宠物生存天数*/
    int survivaldays = 0;
    /**宠物饱食度最大值*/
     int befull_MAX = 100;

int PetAttribute(){
    for(int i = 1;i > 0;i++){
        int choice = 0;
        cout << "\n--------------------------" << endl;
        cout <<"1.恐龙\n2.毛毛虫\n3.海绵\n4.史莱姆"<<endl;
        cout << "请选择你的种族：";
        cin >> choice;
                if(choice == 1)    //输出恐龙数值
        {
            race = "恐龙";
            hp = 100;
            fighting = 20;
            befull_MAX = 10;
            befull = 10;
            foodconsumption = 3;
            break;
        }else if(choice == 2){    //输出毛毛虫数值
            race = "毛毛虫";
            hp = 50;
            fighting = 12;
            befull_MAX = 5;
            befull = 5;
            foodconsumption = 1;
            break;
        }else if(choice == 3){   //输出海绵数值
            race = "海绵";
            hp = 40;
            fighting = 10;
            befull_MAX = 7;
            befull = 7;
            foodconsumption = 1;
            break;
        }else if(choice == 4){    //输出史莱姆数值
            race = "史莱姆";
            hp = 60;
            fighting = 10;
            befull_MAX = 6;
            befull = 6;
            foodconsumption = 1;
            break;
        }else if(i >= 20){
            cout << "\n--------------------------" << endl;
            cout << "   你太傻了，别玩了，再见！";
            cout << "\n--------------------------" << endl;
            exit(250);
        }else{
            cout << "请输入1~4,选择正确的种族！";
            continue;
        }
    }
        cout << "--------------------------" << endl;
        cout<<"请输入你的名字:";
        cin >> name;
    return 0;
}
