#include <iostream>
#include <math.h>

/**
 * @title: 某君新认识一网友。
 *        当问及年龄时，他的网友说：
 *        “我的年龄是个2位数，我比儿子大27岁,
 *        如果把我的年龄的两位数字交换位置，刚好就是我儿子的年龄”
 *        请你计算：网友的年龄一共有多少种可能情况？
 *        提示：30岁就是其中一种可能哦.
 *        请填写表示可能情况的种数。
 * @author : dewey
 * @param : age int 人类正常寿命
 * @param : diffAge int 相差的年龄
 **/

 using namespace std;

 int main(){
     int age;
     int diffAge;

     cout << "请输入您认为合理的人类寿命 : " << endl;
     cin >> age;

     if(age > 100){
        cout << "请输入100以内的数字！" << endl;
        return 0;
     }

     cout << "请输入相差的年龄 : " << endl;
     cin >> diffAge;

     if(diffAge >= age){
        cout << "相差的年龄不能大于等于人类最长寿命！" << endl;
        return 0;
     }


    cout << "出满足条件的年龄对为：" << endl << endl;

    for(int i=10;i<age;i++){
        for(int j=0;j<age;j++){
            if(i-j == diffAge){
                if(i%10*10+floor(i/10) == j){
                    cout <<  "父母的年龄为：" << endl;
                    cout << i << endl;
                    cout <<  "孩子的年龄为：" << endl;
                    cout << j << endl << endl;
                }
            }
        }
    }
    return 0;
 }
