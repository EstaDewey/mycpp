#include <iostream>
#include <math.h>

using namespace std;

/**
 *  @title : 625这个数字很特别，625的平方等于390625，刚好其末3位是625本身。除了625，还有其他的三位数有这个特征吗
 *  @author: dewey
 *  @time : 2018-10-08
 *  @param : num int
 **/
int main(){
    int num;
    cout << "请输入一个待验证的三位数:（输入-1 得到三位数中满足平方后三位等于本身的全部数字）" << endl;
    cin >> num;
    if(num == -1){
        for(int i=100;i<1000;i++){
            if((i*i)%1000 == i){
                cout << i << endl;
            }
        }
    }else{
        if( num > 999 || num < 100 ){
            cout << "不是三位数" << endl;
            return 0;
        }
        if((num*num)%1000 == num){
            cout << num << "的平方是：" << (num*num) << "；尾数为 " << (num*num)%1000 << "；满足条件" << endl;
        }else{
            cout << num << "的平方是：" << (num*num) << "；尾数为 " << (num*num)%1000 << "；不满足条件" << endl;
        }
    }
    return 0;

}
