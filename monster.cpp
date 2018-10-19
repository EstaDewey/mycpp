#include <iostream>
#include <string>

/**
 *  @title: 定义一个类，表示怪物，数据成员包括怪物名称、0怪物ID、1怪物血量、2怪物基础攻击力、3怪物四个基础攻击方式、4怪物初始速度、5怪物当前经验、6怪物等级
 *  创建两个对象并对对象进行初始化
 *  显示两个对象的基础数据包括经验值、等级和退出游戏选项，并让用户进行选择
 *  两方进行对战，攻击方式为选择技能，通过速度进行判断谁先攻击
 *  及时显示怪物掉的血量和当前状态
 *  当一方怪物死掉后，增加另一方怪物的经验，并再次选择怪物，随着怪物的等级的上升，攻击力相应提高，速度变慢，直到用户退出游戏。
 *  @author : dewey
 *  @time : 2018-10-16
 *  @param : money double 金额
 *  @param : opt int 资金操作
 **/

 using namespace std;
//怪物类
 class Monster{

    public:
        string name_c;
        int baseMsg_c[7];
        Monster(string name,int baseMsg[7]);
        int getCtrl(string name_c,int baseMsg_c[7]);
        int battle(string name,int baseMsg[],int status);
        int addExp(int baseMsg[],int subExp);
        int battleWay(int way);


    private:
        //int getMonsterBasicMsg(string name,int baseMsg_c[]);
        int quitGame();
 };
//构造函数
 Monster::Monster(string name,int baseMsg[7]){
     name_c = name;
     baseMsg_c[7] = baseMsg[7];
     getCtrl(name,baseMsg);
 }

//控制函数
 int Monster::getCtrl(string name,int baseMsg[]){
    int exit;
    cout << "名称：" << name << endl;
    cout << "经验值:" << baseMsg[5] << endl;
    cout << "等级:" << baseMsg[6] << endl;
    cout << "----------------------" << endl;
    cout << "退出(输入1 退出)" << endl;
    cin >> exit;
    if(exit == 1){
        quitGame();
    }
 }
//游戏退出函数
int Monster::quitGame(){

    //getCtrl(name,baseMsg[7]);
    return 0;
}
//战斗方式对血量和速度的影响
int *Monster::battleWay(int way){
    int sub[2];//0为消耗血量 1位速度 血量和速度依题成负相关
    switch(way){
        case 1://普通攻击
            sub[0] = 50;
            sub[1] = 3;
            break;
        case 2://法术攻击
            sub[0] = 60;
            sub[1] = 4;
            break;
        case 3://进阶物理攻击
            sub[0] = 70;
            sub[1] = 5;
            break;
        case 4://进阶法术攻击
            sub[0] = 80;
            sub[1] = 6;
            break;
        default:
            cout << "没有该战斗方式" << endl;
            sub[0] = 0;
            sub[1] = 0;
            break;
    }
    //return sub[2];
}
//战斗函数  status 1 进攻 其他 受到攻击
int Monster::battle(string name,int baseMsg[],int status){
    int *sub;
    cout << "当前血量为：" << baseMsg[2] << endl;
    cout << "当前速度为：" << baseMsg[4] << endl;
    sub = battleWay(baseMsg[3]);
    cout << "当前血量为1：" << *(sub + 0) << endl;
    cout << "当前速度为1：" << *(sub + 1) << endl;
    if(status == 1){
        baseMsg[2] += sub[0];//血量
        baseMsg[4] -= sub[1];//速度
    }else{
        baseMsg[2] -= sub[0];
        baseMsg[4] += sub[1];
    }
    cout << "当前血量为：" << baseMsg[2] << endl;
    cout << "当前速度为：" << baseMsg[4] << endl;
    if(baseMsg[2] <=0){
        cout << name_c << "挂了" << endl;
        return 0;
    }
}
//增加经验值
int Monster::addExp(int baseMsg[],int subExp){
    return baseMsg[5]+subExp;
}

int useClass();
int main(){
    useClass();
}

int useClass(){

    string name1 = "moster1";
    string name2 = "moster2";
    int sub[2];
    //0怪物ID、1怪物血量、2怪物基础攻击力、3怪物四个基础攻击方式、4怪物初始速度、5怪物当前经验、6怪物等级
    static int baseMsg1[7] = {1,100,10,3,10,0,0};
    static int baseMsg2[7] = {2,100,10,2,10,0,0};
    Monster Monster1(name1,baseMsg1);
    Monster Monster2(name2,baseMsg2);

    if(Monster1.baseMsg_c[4] > Monster2.baseMsg_c[4]){
        Monster1.battle(name1,baseMsg1,1);
        Monster2.battle(name2,baseMsg2,2);
    }else{
        Monster2.battle(name2,baseMsg2,1);
        Monster1.battle(name1,baseMsg1,2);
    }

}
