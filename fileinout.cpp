#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>

/**
 * @title: 题目：编写程序，程序随机生成100个double类型的数字存储在一个数组中，然后程序将数组中的数字以二进制形式读入一个文本中。
                 再以二进制读取，并将读到到的数据全部打印到屏幕上（十进制，要求每个数字保留3位小数）
                 考察知识点：fread()、fwrite()、文件读写、格式化输出、二进制数组的保存与使用。
 * @author : dewey
 * @time : 2018-11-28
 **/
using namespace std;

void doubletostr(double* a, char* str);
int main()
{
    //参数定义
    int length=100;
    double num[length];
    double singlenum;

    //生成随机double类型数组
    srand( (unsigned)time(NULL));
    for(int i=0;i<100;i++){
        singlenum = rand()/100;
        num[i] = i+singlenum/10000;
    }
    ifstream fin("fineinout.txt");
    ofstream  myfile;
    //判断文件是否存在
    if(!fin){//文件不存在
        myfile.open("fineinout.txt", std::ios::binary | std::ios::out);
        myfile.write((const char*)num, sizeof(double) * length);
        myfile.close();
    }else{
        double* num2 = new double[length];
        ifstream myfilein("fineinout.txt", std::ios::binary | std::ios::in);
        myfilein.read((char*)num2, sizeof(double) * length);
        myfilein.close();
        for(int j=0;j<100;j++){
            cout << num2[j] << "|";
            if(j%10 == 5) cout << endl;
        }
    }

    return 0;
}


