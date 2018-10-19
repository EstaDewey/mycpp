#include <iostream>
using namespace std;

/**
 * 编写函数（方法），功能。求出1~100之间能够被3或7整除，不能够同时被3和7整除的数字的个数。
 * @author : dewey
 * @param num int 获取计算范围的整数
 * @time 2018-09-17
 **/
int* getMathNum(int num,int res[]);
void getFormat(int *arr);

int main(){
    int num;
    int res[38];
    int *retend;
    cout << "press the num:" << endl;
    cin >> num;
    retend = getMathNum(num,res);
    cout << "The result is " << endl;
    getFormat(retend);
    return 0;
}

//计算函数
int* getMathNum(int num,int res[]){
    int j=0;//结果数组key值
    for(int i=1;i<=num;i++){
        if((i%3 ==0 || i%7==0) && !(i%3 == 0 && i%7 == 0) ){
            res[j]=i;
            j++;
        }
    }
    return res;
}
//输出格式整理
void getFormat(int *arr){
    for(int k=0;k<=38;k++){
        cout << "arr[" << k << "]=" << arr[k]<< endl;
    }
}
