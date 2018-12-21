/*
简介:探索实现
作者:FRP - 史莱姆
创建时间:
*/
#include <stdlib.h>
#include "Adventure.h"
#include "Attribute.h"
#include "Parcel.h"
int Judgefood = 0; //获取食物
/**探索*/
int PetAdventure(int hp,string race,int action,string name){
    int ran1;//随机地点
    ran1 = (rand() % (3 - 1+1)) + 1 ;//随机地点 1-3
    //判断行动点
    if(action > 0){
        //判断宠物种族
        if(race == "恐龙")
         {
            if(ran1 == 1) //探索丛林
            {
                //成就系统
                //成功探索次数
                sufulAdventure++;
                //成功探索丛林次数
                sufulJungle++;
                return AdtJungle(hp,action,name,race);
            }else if(ran1 == 2)//探索海边
            {
                //成就系统
                //成功探索次数
                sufulAdventure++;
                return AdtSeaside(hp,action,name,race);


            }else if(ran1 == 3)//探索深山
             {
                //成就系统
                //成功探索次数
                sufulAdventure ++;
                //成功探索深山次数
                sufulRetmountains ++;
                return AdtRemotemountains (hp,action,name,race);
             }
         }
         if(race == "毛毛虫")
         {
            if(ran1 == 1) //探索树叶
            {
                //成就系统
                //成功探索次数
                sufulAdventure ++;
                return Adtleaf(hp,action,name,race);

            }else if(ran1 == 2)//探索花朵
            {
                //成就系统
                //成功探索次数
                sufulAdventure ++;
                return Adtflower(hp,action,name,race);

            }else if(ran1 == 3)//探索树
             {
                //成就系统
                //成功探索次数
                sufulAdventure ++;
                //成功探索树木次数
	            sufulTree ++;
                return AdtTree (hp,action,name,race);

             }
         }
         if(race == "海绵")
         {
            if(ran1 == 1) //探索海底
            {
                //成就系统
                //成功探索次数
                sufulAdventure ++;
                //成功探索海底次数
                sufulSeabed++;
                return AdtSeabed(hp,action,name,race);

            }else if(ran1 == 2)//探索超市
            {
                //成就系统
                //成功探索次数
                sufulAdventure ++;
                //成功探索老九超市次数
                sufulSupermarke ++;
                return AdtSupermarket(hp,action,name,race);

            }else if(ran1 == 3)//探索饭店
             {
                //成就系统
                //成功探索次数
                sufulAdventure ++;
                //成功探索老九餐馆次数
                sufulRestaurant ++;
                return AdtRestaurant (hp,action,name,race);

             }
         }
         if(race == "史莱姆")
         {
            if(ran1 == 1) //探索实验室
            {
                return AdtLab(hp,action,name,race);
            }else if(ran1 == 2)//探平原
            {
                return AdtFlatlands(hp,action,name,race);
            }else if(ran1 == 3)//探索下水道
             {
                return AdtSewer (hp,action,name,race);
                //成功探索下水道次数
                sufulSewer ++;
             }
        }
    }else
    {
        cout << "行不值不足"<<endl;
    }
    return 0;
}

/**探索丛林*/
int AdtJungle(int hp,int action,string name,string race){

    cout << "--------------------------" << endl;
    cout << name << "向着丛林走去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //随机获得行动点
    {
        RandEvent2();
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(1);//获得食物
        if(Judgefood != -1 ){
            cout << name << "在一棵小灌木中发现了";
             DisPlay(race,Judgefood);

        }else
        {
            cout<< name <<"探索失败";
            sufulAdventure--;
            return -1;
        }
        return Judgefood;
}

/**探索海边*/
int AdtSeaside(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着海边走去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //判断发生什么事件
    {
        RandEvent2(); //随机获得行动点
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(2);//获得食物
        if(Judgefood != -1){
            cout << name << "在贝壳中发现了";
             DisPlay(race,Judgefood);

        }else
    {
        cout<< name <<"探索失败";
        sufulAdventure --; //成就
        return -1;
    }
    return Judgefood;
}

/**探索深山*/
int AdtRemotemountains(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着深山走去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //判断发生什么事件
    {
        RandEvent2(); //随机获得行动点
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(3);//获得食物
        if(Judgefood != -1){
            cout << name << "\n在石头下发现了";
             DisPlay(race,Judgefood);

        }else
    {
        cout<< name <<"探索失败";
        sufulAdventure --; //成就
        return -1;
    }
    return Judgefood;
}

/**探索树叶*/
int Adtleaf(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着树叶爬去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //随机获得行动点
    {
        RandEvent2();
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(1);//获得食物
        if(Judgefood != -1){
            cout << name << "在树叶中发现了";
             DisPlay(race,Judgefood);

        }else{
            cout<< name <<"探索失败";
            sufulAdventure --; //成就
            return -1;
        }
           return Judgefood;

}

/**探索花朵*/
int Adtflower(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着花朵爬去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //判断发生什么事件
    {
        RandEvent2(); //随机获得行动点
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(2);//获得食物
        if(Judgefood != -1){
            cout << name << "在花朵中发现了";
             DisPlay(race,Judgefood);
        }else{
             cout<< name <<"探索失败";
             sufulAdventure --; //成就
                }
        return Judgefood;
}

/**探索树*/
int AdtTree(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着树爬去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //判断发生什么事件
    {
        RandEvent2(); //随机获得行动点
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(3);//获得食物
        if(Judgefood != -1){
            cout << name << "在树叶中发现了";
             DisPlay(race,Judgefood);

        }else{
             cout<< name <<"探索失败";
             sufulAdventure --; //成就
            return -1;
        }
         return Judgefood;
}

/**探索海底*/
int AdtSeabed(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着海底走去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //随机获得行动点
    {
        RandEvent2();
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(1);//获得食物
        if(Judgefood != -1){
            cout << name << "在海草中发现了";
             DisPlay(race,Judgefood);

        }else{
        if(Judgefood != -1){
             cout<< name <<"探索失败";
             sufulAdventure --; //成就
            return -1;
                }
        }
         return Judgefood;
}


/**探索超市*/
int AdtSupermarket(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着超市走去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //判断发生什么事件
    {
        RandEvent2(); //随机获得行动点
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(2);//获得食物
        if(Judgefood != -1){
            cout << name << "在一棵小灌木中发现了";
             DisPlay(race,Judgefood);

        }else
        {
             cout<< name <<"探索失败";
             sufulAdventure --; //成就
             return -1;
        }
         return Judgefood;
}

/**探索饭店*/
int AdtRestaurant(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着饭店走去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //判断发生什么事件
    {
        RandEvent2(); //随机获得行动点
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(3);//获得食物
        if(Judgefood != -1){
            cout << name << "在厨房中发现了";
             DisPlay(race,Judgefood);
        }else
        {
            cout<< name <<"探索失败";
            sufulAdventure --; //成就
            return -1;
        }
         return Judgefood;
}

/**探索实验室*/
int AdtLab(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着实验室爬去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //随机获得行动点
    {
        RandEvent2();
    }
                //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(1);//获得食物
        if(Judgefood != -1){
            cout << name << "在试管中发现了";
             DisPlay(race,Judgefood);

        }else{
            cout<< name <<"探索失败";
            sufulAdventure --; //成就
            return -1;
        }
         return Judgefood;
}

/**探索平原*/
int AdtFlatlands(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着平原爬去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //判断发生什么事件
    {
        RandEvent2(); //随机获得行动点
    }   //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(2);//获得食物
        if(Judgefood != -1){
            cout << name << "在草丛中发现了";
             DisPlay(race,Judgefood);
        }else
        {
            cout<< name <<"探索失败";
            sufulAdventure --; //成就
            return -1;
        }
         return Judgefood;
}

/**探索下水道*/
int AdtSewer(int hp,int action,string name,string race){
    cout << "--------------------------" << endl;
    cout << name << "向着下水道爬去" <<endl;
    if((rand() % (3 - 1+1)) + 1 == 1) //判断发生什么事件
    {
        RandEvent2(); //随机获得行动点
    }
        //随机减少生命 1-10
        int v = RandEvent();
        if(v == -1){
            return -1;
        }else if(v == 1){
            return 1;
        }
        FindFood(3);//获得食物
        if(Judgefood != -1){
            cout << name << "在下水道中发现了";
             DisPlay(race,Judgefood);
        }else{
            cout<< name <<"探索失败";
            sufulAdventure --; //成就
            return -1;
        }
        return Judgefood;
}

/**随机减少生命 1-10*/
int RandEvent(){
    MonsterQianzhi[1] = 20 + survivaldays;
    MonsterQianzhi[0] = 120 + survivaldays * 20;
    int s = ExploringLnteraction();
    if(s == -1){
        return -1;
    }else if(s == 1){
        return 1;
    }
    return 0;
}

/**随机获得行动点*/
void RandEvent2(){
    int c; //行动点
    if((rand()% (2 - 1 +1) + 1) == 1)//获得行动点
    {
        c = (rand() % 2 ) + 1; //1-3之间随机
        action = action + c;
        cout <<  name <<"滑了一JIO，直接滚到了目的地，获得了" << c << "点行动点" <<endl;
    }else
    {
        cout<< name <<"走了过去什么也没发生"<<endl;
    }
}

/**显示获得食物*/
void DisPlay(string race,int y){
    FindFoodIntroduce(race,y);
    cout << "属性:\n";
    FindAttribute(race,y);
    //cout << "\n--------------------------" << endl;
}

/**显示食物属性*/
void FindAttribute(string race,int y){
		if(race == "恐龙")
		{
		    cout << "生命    饱食度   武力值" << endl;
			cout << mstAttribute[y][0] << "       ";
            cout << mstAttribute[y][1] << "       ";
            cout << mstAttribute[y][2] << "       ";

		}
		if(race == "毛毛虫")
		{
		    cout << "生命    饱食度   武力值" << endl;
			cout << mstAttribute[y+12][0] << "         ";
            cout << mstAttribute[y+12][1] << "         ";
            cout << mstAttribute[y+12][2] << "         ";

		}
		if(race == "海绵")
		{
		    cout << "生命    饱食度   武力值" << endl;
			cout << mstAttribute[y+24][0] << "         ";
            cout << mstAttribute[y+24][1] << "         ";
            cout << mstAttribute[y+24][2] << "         ";

		}
		if(race == "史莱姆")
		{
		    cout << "生命    饱食度   武力值" << endl;
			cout << mstAttribute[y+36][0] << "         ";
            cout << mstAttribute[y+36][1] << "         ";
            cout << mstAttribute[y+36][2] << "         ";

		}

}

/**显示获得食物名称*/
void FindFoodNames(string race,int y){
         if(race == "恐龙"){
           cout << materials[0][y] << endl;
         }
         if(race == "毛毛虫"){
            cout << materials[1][y] << endl;;
         }
         if(race == "海绵"){
            cout << materials[2][y] << endl;
         }
         if(race == "史莱姆"){
             cout << materials[3][y] << endl;
        }
}

/**获得物品*/
void FindFood(int there){

        if(there == 1){
            if(rand()% 2 == 0){
                sufulAcqMatls++;
                Judgefood = (rand() % (4 + 1)); //0-4之间随机
            }else{
                Judgefood = -1;
                cout << "没有获得物品" <<endl;
            }
            UserParcelop(Judgefood ,0,0,1); //背包参数
        }
         if(there == 2){
            if(rand()% 2 == 0){
                sufulAcqMatls++;
                Judgefood = (rand() % (8 - 4+1)) + 4;
            }
            else{
                Judgefood = -1;
                cout << "没有获得物品" <<endl;
            }
            UserParcelop(Judgefood,0,0,1); //背包参数
         }
        if(there == 3){
            if(rand()% 2 == 0){
                sufulAcqMatls++;
                Judgefood = (rand() % (11 - 9+1)) + 9; //9-11之间随机

            }
            else{
                Judgefood = -1;
                cout << "没有获得物品" <<endl;
            }
            UserParcelop(Judgefood,0,0,1); //背包参数
        }
}

/**显示食物介绍*/
void FindFoodIntroduce(string race,int y){
         if(race == "恐龙")
         {
            //cout << "物品名称:" <<endl;
            cout << materials[0][y] << endl;
            cout << "--------------------------" << endl;
            cout << "物品介绍:" << endl;
            cout << mtsIntroduce[y] << endl;

         }
         if(race == "毛毛虫")
         {
            cout << materials[1][y] << endl;
            cout << "--------------------------" << endl;
            cout << "物品介绍:" <<endl;
            cout << mtsIntroduce[y + 12] << endl;

         }
         if(race == "海绵")
         {
            cout << materials[2][y] << endl;
            cout << "--------------------------" << endl;
            cout << "物品介绍:" <<endl;
            cout << mtsIntroduce[y + 24] << endl;

         }
         if(race == "史莱姆")
         {
             cout << materials[3][y] << endl;
             cout << "--------------------------" << endl;
             cout << "物品介绍:" <<endl;
             cout << mtsIntroduce[y + 36] << endl;

        }
}

/**以下是史莱姆的私货*/


/**杂鱼 浅挚*/
int MonsterQianzhi[3] = {120,10};


/**探索互动(战斗)*/
int ExploringLnteraction(){
    srand(time(0));
    int instructions; //指令
    int foot1; //战利品


    if(rand()%(100 - 1 + 1) +1 >= 90){
        cout << "--------------------------" << endl;
        cout << endl;
        cout << "杂鱼浅挚出现了！！！" << endl;
        while(MonsterQianzhi[0] > 1 && hp > 1){
        cout << "请选择行动:" << endl;
        cout << "1、攻击" << endl;
        cout << "2、逃走" << endl;
        cin >> instructions;
        if(instructions == 1){
            if( rand() % 2  == 0){

                cout << name << "发动了一次牛逼的攻击" << endl;
                cout << "造成了" << fighting << "点伤害" << endl;
                MonsterQianzhi[0] = MonsterQianzhi[0] - fighting;
                cout << "浅挚的生命值： " << MonsterQianzhi[0] << endl;
                cout << name << "的生命值： " << hp << endl;
                    }else{
                cout << "杂鱼浅挚" << "发动了一次正常的攻击" << endl;
                cout << "造成了" << MonsterQianzhi[1] << "点伤害" << endl;
                hp = hp - MonsterQianzhi[1];
                cout << "浅挚的生命值： " << MonsterQianzhi[0] << endl;
                cout << name << "的生命值： " << hp << endl;
                if(hp <= 0)
                {
                    return -1;
                }
            }
        }
            if(instructions == 2){
                cout << name << "转身就要逃走" << endl;
                if(rand() % 2 == 0){
                    cout << name << "成功逃走" << endl;
                    Judgefood = -1;
                    return -1;

                }else{
                    cout << name << "逃走失败" << endl;
                    cout << "杂鱼浅挚" << "发动了一次正常的攻击" << endl;
                    cout << "造成了" << MonsterQianzhi[1] << "点伤害" << endl;
                    hp = hp - MonsterQianzhi[1];
                    cout << "浅挚的生命值： " << MonsterQianzhi[0] << endl;
                    cout << name << "的生命值： " << hp << endl;
                    if(hp <= 0)
                    {
                        return -1;
                    }
                }
            }
        }
        if(hp > 0){
            cout << "获得了战利品" << endl;
            foot1 = (rand() % 11) + 1;
            UserParcelop(foot1,0,0,1); //背包参数
            DisPlay(race,foot1);
            return 1;
        }
        cout << endl;
        cout << "\n--------------------------" << endl;
        return 0;
    }
    return 3;
}




