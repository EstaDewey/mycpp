#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

/**
 * @title: ���һ��ģ������Ԥ���ĳ���ֻ��������������Ϣ�ǳ���������ɵģ��򿪳���������ʾ������Ϣ
 *         1��������¶ȣ�-20~42��
 *         2�����������״�����ꡢѩ���磩
 *         3�����յķ缶����0~12����
 *         ������ʾ���û�ѡ����Ҫ�鿴��Ϣ�Ĳ˵�������ֱ����ʾ��Щ��Ϣ���ɣ���Ȼ������Ϣ�������ӡ�ģ�
 *         ������Ҫע��һЩ��ʵ�������統�¶�Ϊ����ʱ������״��������Ϊ�ꡣ
 * @author : dewey
 * @time : 2018-10-18
 **/
using namespace std;

int Random(int m,int n);
int main(){
    string weather;
    int temperture;
    int wind;

    cout << "�����¶�Ϊ: " << endl;
    temperture = Random(-20,40);
    cout << temperture << endl;
    cout << "���������״��: " << endl;
    if(temperture<0){
        weather = (Random(1,2) == 1) ? "ѩ" : "��";
    }else{
        weather = (Random(2,3) == 3) ? "��" : "��";
    }
    cout << weather << endl;
    cout << "���յķ缶: " << endl;
    wind = Random(0,12);
    cout << wind << endl;
}


int Random(int m,int n){
    int pos, dis;
    srand((unsigned)time(0));
    if(m == n)
    {
        return m;
    }
    else if(m > n)
    {
        pos = n;
        dis = m - n + 1;
        return rand() % dis + pos;
    }
    else
    {
        pos = m;
        dis = n - m + 1;
        return rand() % dis + pos;
    }
}

