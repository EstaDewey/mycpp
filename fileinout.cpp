#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>

/**
 * @title: ��Ŀ����д���򣬳����������100��double���͵����ִ洢��һ�������У�Ȼ����������е������Զ�������ʽ����һ���ı��С�
                 ���Զ����ƶ�ȡ������������������ȫ����ӡ����Ļ�ϣ�ʮ���ƣ�Ҫ��ÿ�����ֱ���3λС����
                 ����֪ʶ�㣺fread()��fwrite()���ļ���д����ʽ�����������������ı�����ʹ�á�
 * @author : dewey
 * @time : 2018-11-28
 **/
using namespace std;

void doubletostr(double* a, char* str);
int main()
{
    //��������
    int length=100;
    double num[length];
    double singlenum;

    //�������double��������
    srand( (unsigned)time(NULL));
    for(int i=0;i<100;i++){
        singlenum = rand()/100;
        num[i] = i+singlenum/10000;
    }
    ifstream fin("fineinout.txt");
    ofstream  myfile;
    //�ж��ļ��Ƿ����
    if(!fin){//�ļ�������
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


