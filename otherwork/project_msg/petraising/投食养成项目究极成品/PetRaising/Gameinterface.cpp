/*
简介:游戏界面函数实现
作者：FRP - 楠子疯
创建时间:2018/10/2
*/
#include <iostream>
#include <windows.h>
#include "ChoicePet.h"
#include "GameInterface.h"

/**游戏选择界面*/
void GameInterface(){
    //用户的选择
	system("cls");
    befull = befull - foodconsumption;
    string cheating = "FreePeople:NanZiFeng";
    while(int i = 1){
		PetDemise();
        ShowAttribute();
        /*if(PetDemise() == 0 || befull <= 0 || befull >= befull_MAX)
        {
            break;
        }*/
        Achievement();
        int choice;
        Sleep(200);
        cout  << name << "已经生存:" << survivaldays << "天" << endl;
        cout << "--------------------------" << endl;
        Sleep(200);
        cout << "请选择接下来" << name <<"的行动"<< "(剩余行动点为:" << action <<")"<< endl;
        cout << "1.喂食" << endl;
        cout << "2.探索" << endl;
        cout << "3.背包" << endl;
        cout << "4.进入下一回合" << endl;
        cout << "请选择:";
        cin >> choice;
		system("cls");
        if(choice == 1){
            //喂食
            Sleep(200);
            PetFeed();
        }else if(choice == 2){
            //探索
            Sleep(200);
            if(action <= 0){
                cout << "行动点为" << action << "   无法进行探索";
                continue;
            }
            Sleep(200);
            PetAdventure(hp,race,action,name);
            if(PetDemise() == 0){
                break;
            }
            action--;
        }else if(choice == 3){
            //背包
            system("cls");
            UserParcel();
            Sleep(200);
        }else if(choice == 4){
            string choices;
            Sleep(200);
            cout << "--------------------------" << endl;
            cout << "是否进入下一回合(y/n)?";
            cin >> choices;
            if(choices == "y"){
                //行动点数增加
				survivaldays++;
                action = 3;
                befull = befull - foodconsumption;
                cout << "--------------------------" << endl;
            }else{
                continue;
            }
        }
    }
}


int StartScreen(){
    cout << "            -----------------------"   << endl;
    cout << "           |                        |" << endl;
    cout << "           |  拒绝给组内人员寄刀片  |" << endl;
    cout << "           |                        |" << endl;
    cout << "           |                        |" << endl;
    cout << "           |   请  适  度  游  戏   |" << endl;
    cout << "           |                        |" << endl;
    cout << "           --------------------------" << endl;
    return 0;
}

void ShowAttribute(){
    Sleep(300);
    cout << "\n--------------------------" << endl;
    cout << name << "属性：" << endl;
    cout << "种族:  " << race << endl;
    cout << "血量:  " << hp << endl;
    cout << "饱食度:" << befull<<endl;
    cout << "--------------------------" << endl;
    Sleep(300);

}
