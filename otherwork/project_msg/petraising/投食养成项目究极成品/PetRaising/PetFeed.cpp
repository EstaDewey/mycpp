/*
简介:
作者:
创建时间:
*/

#include "PetFeed.h"

int PetFeed()
{
	int num; //物品编号，数组key值
    int opt; //执行操作
    int discard; //丢弃
    int employ; //使用
    int get; //新增or获取物品
	if(parcel[0][1] <= 0){
                cout << "背包为空，请去寻找物品！" << endl;
                return 0;
			}
	for(int j=0;j<10;j++){
        if(parcel[j][0] >0){
            cout << "名称：";
            DisPlay(race,parcel[j][0]-1);
            cout <<"数量：" << parcel[j][1] << endl;
            cout <<"物品编号：" << parcel[j][0]-1 << endl;
            cout << "--------------------------" << endl;
        }else{
            continue;
        }

    }
    for(int i=0;i<=10;i++){
        cout << "请输入物品编号(输入-1退出)：" << endl;
        cin >> num;
        if(num == -1){
            return 0;
        }else if(num > 12 || num < 0){
            cout << "请输入1～12的数字" << endl;
        }

        cout << "请输入所做操作：（其中1为使用，2位丢弃）" << endl;
        cin >> opt;//输入操作类型

        if(opt!=1 && opt!=2 && opt!=3){//对背包物品相关操作
            cout << "请输入1或2" << endl;
            return 0;
        }
        int m = 0;
        for(int n=0;n<10;n++){

            if(parcel[n][0] == num+1 && opt != 3 && parcel[n][0] > 0){
                if(opt == 1){ //使用物品
                    employ = 1;
                    //使用食物给宠物增加对应属性
                    Petreflect(1,num);
                }else{
                    employ = 0;
                }
                if(opt == 2) discard = 1; else discard = 0; //丢弃物品
                if(opt == 3) get = 1; else get = 0; // 获得物品
                UserParcelop(num, discard, employ, get);
				return 0;
            }else{
                m = m+1;
				continue;
            }
        }
        if(m == 10 && opt != 3){
            cout << "想吃的还没有，赶紧出去找吧！" << endl;
            Sleep(300);
            return 0;
        }
        if(opt == 3){ // 获得物品
            get = 1;
            UserParcelop(num, 0, 0, get);
        }
	}
   return 0;
}
