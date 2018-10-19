#include <iostream>
#include <math.h>
using namespace std;

/**
 * @question :某个公司采用公用电话传递数据，数据是四位的整数  9527 ，在传递过程中是加密的，加密规则如下：每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换，后输出加密后的数字。
 * @author :dewey
 * @param : num int 随机整数
 **/
int main(){
    int num;//原始数字
    int one,two;//数字交换时所需的临时存量
    int countnum = 0;//数字位数
    int digit[10];//存放每位数字的数组
    double resultNum = 0; //输出结果数字
    cout << "please press the Num to encypt:" << endl;
    cin >> num;
    //获取每位数字并加上5,然后用和除以10的余数代替该数字
    while(num != 0){
        digit[countnum] = (num%10+5)%10;
        countnum++;
        num = num/10;
    }
    //一四位更换
    if(countnum>=4){
        one = digit[0];
        digit[0] = digit[3];
        digit[3] = one;
    }
    //二三位更换
    if(countnum>=3){
        two = digit[1];
        digit[1] = digit[2];
        digit[2] = two;
    }
    //生成加密后的数字
    for(int i=0;i<countnum;i++){
        resultNum = resultNum+digit[i]*pow(10,i);
    }
    cout << "the resault NUM is :" << endl;
    cout << resultNum << endl;
}
