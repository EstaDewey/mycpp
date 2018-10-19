#include <iostream>
/**
 * @title:
 *      某IT公司老板发现数据库被删了，已知有四个程序员（包括周某在内的）A、B、C、D的四个人，四人分别陈述如下：
 *      A说：不是我。
 *      B说：是C。
 *      C说：是D。
 *      D说：C在胡说
 *      已知3个人说了真话，1个人说的是假话。
 *      现在请根据这些信息，写一个程序来确定谁打算跑路？
 * @author:dewey
 * @time : 2018-09-20
 * @explain : 其中 0为假 1为真 2为不确定
 **/
using namespace std;

int main(){
    int A = 1,B = 1,C = 1,D = 1;
    int a,b,c,d;
    //若A说的是真的话
    if(A==1){
        a = 1;
        b = 0;
        c = 0;
        d = 1;
        if(a+b+c+d == 3){ //因为其中有三个人说的是真话，故结果与3相等的即为真实结果
            cout << "A打算跑路，收拾行李中……" << endl;
        }
    }
    //若B说的是真的话
    if(B==1){
        a = 1;
        b = 1;
        c = 0;
        d = 1;
        if(a+b+c+d == 3){
            cout << " C打算跑路，收拾行李中……" << endl;
        }
    }
    //若C说的是真的话
    if(C==1){
        a = 1;
        b = 0;
        c = 1;
        d = 0;
        if(a+b+c+d == 3){
            cout << "D打算跑路，收拾行李中……" << endl;
        }
    }
    //若D说的是真的话
    if(D==1){
        a = 2;
        b = 2;
        c = 0;
        d = 1;
        if(a+b+c+d == 3){
            cout << "我只能知道D不会跑路，其他三个可能都在收拾行李……" << endl;
        }
    }
}
