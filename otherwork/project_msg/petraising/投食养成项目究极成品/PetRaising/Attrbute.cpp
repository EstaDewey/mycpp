//
//  Attribute.cpp
//  mycpp
//
//  Created by 杜威 on 2018/10/3.
//  Copyright © 2018年 dewey. All rights reserved.
//

#include "Attribute.h"

    std::string materials[4][13] = {{"贪婪者猪蹄","壮龙牛肉","火山牛肉","银杏树","大史莱姆","巨型椰果","神户牛排","烂鸡蛋","蓝色毛毛虫","绿色毛毛虫","腐肉","飞鸡"},
									{"黄金叶","盼盼小面包","小青菜","大白菜","红景天","昙花瓣","核桃","肉","蓝色史莱姆","白色史莱姆","桑树叶","梧桐树叶"},
									{"黑人酱油","融合污渍","清水","大白菜","洗锅水","雨水","球藻","沐浴露","蓝色毛毛虫的汁液","白色毛毛虫的汁液","giao牌洗洁精","菜汤"},
									{"花心萝卜","小甜甜菜","山泉水","芒果","泥巴","高级果胶","盐水","液氮","蓝色海绵","白色海绵","清水","化合物"}};
    std::string mtsIntroduce[50] =  {"我还要更多，更多！！！",
										"吃嘛嘛香，身体倍棒",
										"火红色的肉质，肉上流转着红色的光芒",
										"其实我是一个素食主义者，你信么...",
										"本是同根生，相煎何太急",
										"化身最甜龙，魅力突飞猛进",
										"恐龙非常高兴，一口便吞下了这一小块牛排，看起来它很享受",
										"腐烂发臭的鸡蛋",
										"百年难得一遇的变异毛毛虫，咬下去爆出蓝色的汁液，清新口气",
										"普通毛毛虫，甜蜜软糯",
										"地上随处可见的恐龙腐肉",
										"能飞上悬崖的鸡。",
										"金色的叶子?超好次！",
										"残余的小面包",
										"青菜可是我的最爱",
										"大白菜白呀白~~",
										"好像吹起来就会飞走的叶子",
										"香气四溢",
										"结实的核桃",
										"看起来很好吃的肉",
										"百年难得一遇的变异史莱姆，咬下去爆出蓝色的汁液，能够刺伤敌人",
										"普通史莱姆，味道虚无,口感奇差",
										"普通的桑树叶",
										"传说中栖息过凤凰的梧桐树的树叶",
										"我希望有人曾记得,当初的我也白过",
										"你要的全拿走，剩下的我吸收",
										"谁还敢说我轻，时间就像我身体里的水，挤一挤总还是有的...",
										"难以入口的大白菜",
										"节约用水",
										"天晴在等烟雨，而我在等你",
										"神秘的藻类",
										"老九君的沐浴露",
										"百年难得一遇的变异毛毛虫行走后留下的汁液，微辣。",
										"普通毛毛虫的死亡残留，辛辣。",
										"我是咖喱giaogiao",
										"新鲜的菜汤",
										"没错，我就是花心大萝卜",
										"我没钱请你吃饭，但我可以请你吃菜",
										"甘甜可口",
										"黄色的水果",
										"泥巴护体，刀枪不入",
										"水果史莱姆的尸体,有嚼劲！",
										"大海的味道",
										"清爽的液氮",
										"游戏内死亡的精英海绵，圆润如玉，口感润滑。",
										"游戏内死亡的lowser海绵，勉强饱腹。",
										"清清凉凉",
										"混合色的不明液体"};
	//第一个是生命值、第二个是饱食度、第三个是武力,
	int mstAttribute[52][4]={{5,3,2},{10,2,1},{5,2,4},{10,1,-1},{20,3,2},{10,2,2},{2,1,0},{-10,-2,-1},{5,2,0},{0,1,1},{1,1,0},{2,0,1},
                              {4,1,15},{7,2,1},{5,0,0},{6,0,0},{0,1,2},{5,1,1},{-4,1,1},{0,0,0},{-2,2,0},{0,1,1},{0,2,1},{6,2,0},
                              {5,1,0},{4,1,0},{5,0,0},{-10,0,0},{0,1,2},{0,1,1},{0,2,0},{0,-1,2},{10,2,0},{0,1,1},{3,0,2},{-5,0,0},
                              {5,1,0},{3,1,0},{2,1,0},{7,1,1},{1,1,1},{10,2,2},{3,1,0},{20,-1,-2},{10,2,0},{0,1,0},{5,1,0}};
	//成功探索次数
	int sufulAdventure;
	//成功获得物品次数
	int sufulAcqMatls;
	//丢弃物品次数
	int disAcqMatls;
	//成功探索丛林次数
	int sufulJungle;
	//成功探索树木次数
	int sufulTree;
	//成功探索老九超市次数
	int sufulSupermarke;
	//成功探索海底次数
	int sufulSeabed;
	//成功探索下水道次数
	int sufulSewer;
	//成功探索老九餐馆次数
	int sufulRestaurant;
	//成功探索深山次数
	int sufulRetmountains;
	//成功喂食次数
	int sufulFeed;

void Achievement() // 成就
{
	//achievementRace[][]  种族成就
	// 通用成就
	string achievementCurrent[20] = {"成就:成功存活五天：你已经迈出了成功的第一步\n",
								"成就:成功存活十天：你距离成功越来越近了\n",
								"成就:成功存活三十天：你可真优秀\n",
								"成就:成功活到死：这都没弄死你?\n",
								"成就:成功完成探索一次：这是我们照顾新人\n",
								"成就:成功完成探索十次：你信不信我一矛戳死你个欧洲人??\n",
								"成就:成功完成探索三十次：已@程序员，菜市口见\n",
								"成就:成功获得物品十件：背包满了抓紧清理\n",
								"成就:成功获得物品二十件：你已经在小康的路上了\n",
								"成就:成功获得物品五十件：放下这件物品，跟我走吧\n",
								"成就:成功获得物品一百件：最大赢家\n",
								"成就:成功丢弃物品五十件：家里有矿吧你\n",
								"成就:成功探索丛林十次：捉迷藏小能手\n",
								"成就:成功探索树木十次：这棵树熟了，该砍了\n",
								"成就:成功探索老九超市十次：再买就剁手！\n",
								"成就:成功探索海底十次：神秘的海域\n",
								"成就:成功探索下水道十次：感觉就和回家一样\n",
								"成就:成功探索老九餐馆十次：资深老饕\n",
								"成就:成功探索深山十次：秘境探索者\n",
								"成就:成功喂食一百次：有爱心的主人\n",};
    cout << "已获得:" << endl;
	if(survivaldays == 5){
		cout << achievementCurrent[0];
	}
	if(survivaldays == 10){
		cout << achievementCurrent[1];
	}
	if(survivaldays == 30){
		cout << achievementCurrent[2];
	}
	if(survivaldays == lifetime){
		cout << achievementCurrent[3];
	}
	if(sufulAdventure == 1){
		cout << achievementCurrent[4];
	}
	if(sufulAdventure == 10){
		cout << achievementCurrent[5];
	}
	if(sufulAdventure == 30){
		cout << achievementCurrent[6];
	}
	if(sufulAcqMatls == 10){
		cout << achievementCurrent[7];
	}
	if(sufulAcqMatls == 20){
		cout << achievementCurrent[8];
	}
	if(sufulAcqMatls == 50){
		cout << achievementCurrent[9];
	}
	if(sufulAcqMatls == 100){
		cout << achievementCurrent[10];
	}
	if(disAcqMatls == 50){
		cout << achievementCurrent[11];

	}
	if(sufulJungle == 10){
		cout << achievementCurrent[12];
	}
	if(sufulTree == 10){
		cout << achievementCurrent[13];
	}
	if(sufulSupermarke == 10){
		cout << achievementCurrent[14];
	}
	if(sufulSeabed == 10){
		cout << achievementCurrent[15];
	}
	if(sufulSewer == 10){
		cout << achievementCurrent[16];
	}
	if(sufulRestaurant == 10){
        cout << achievementCurrent[17];
	}
	if(sufulRetmountains == 10){
		cout << achievementCurrent[19];
	}
	if(sufulFeed == 100){
		cout << achievementCurrent[19];
	};
    cout << "--------------------------" << endl;
}
