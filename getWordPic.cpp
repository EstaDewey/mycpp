#include <iostream>
#include <cmath>

/**
 * @title : 利用字母可以组成一些美丽的图形，下面给出了一个例子：
 * ABCDEFG
 * BABCDEF
 * CBABCDE
 * DCBABCD
 * EDCBABC
 * 这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。
 * 输入格式
 * 输入一行，包含两个整数n和m，分别表示你要输出的图形的行数的列数。
 * 输出格式
 * 输出n行，每个m个字符，为你的图形。
 * 数据规模与约定  1 <= n, m <= 26。
 * @author : dewey
 * @time : 2018-09-28
 * @param : n int 行
 * @param : m int 列
 **/

 using namespace std;

 int getWordPic(int n,int m);
 int main(){
    int n;
    int m;
    cout << "请输入行数：" << endl;
    cin >> n;
    if(n<1){
        cout << "输入错误，n不能小于1！" << endl;
        return 0;
    }
    cout << "请输入列数：" << endl;
    cin >> m;
    if(m>26){
        cout << "输入错误，m不能大于26！" << endl;
        return 0;
    }

    getWordPic(m,n);
    return 0;

 }

int getWordPic(int m,int n){
    char a='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             cout<< (char)(a+abs(i-j));
        }
        cout << endl;
    }

    return 0;
}
