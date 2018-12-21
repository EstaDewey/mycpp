#include <iostream>
#include <string>

/**
 * @title: 马克思手稿中有一道趣味数学题：有30个人，其中有男人、女人和小孩。在一家饭馆里吃饭，共花了50先令。
 *         每个男人各花3先令，每个女人各花2先令，每个小孩各花1先令。问男人、女人和小孩各有几个？
 * @author : dewey
 * @time : 2018-10-23
 * @param : people int 人数
 * @param : money int 金额
 **/
using namespace std;

int main()
{
    int people;
    int money;
    int man;
    int woman;
    int chlidren;

    START:
        cout << "请输入人数：" << endl;
        cin >> people;
        cout << "请输入金额：" << endl;
        cin >> money;
    for(man = 0; man < money/3; man++){
		for(woman = 0; woman < (money-3*man)/2; woman++) {
			if(man*3+woman*2+(people-man-woman)*1 == money) {
                if(man !=0 && woman != 0){
                    cout << "男人：" << man << "女人：" << woman << "儿童：" << people-man-woman << endl;
                }

			}
		}
    }
    if(money == 0 ){
        return 0;
    }else{
        goto START;
    }
}
