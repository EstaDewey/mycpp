#include <iostream>
#include <math.h>

/**
 * @explain : ��Ŀ����1��2��3��4�ĸ����֡�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
            Ҫ�� ��дһ�������жϳ�����ɵ����ֵĸ�����������������֡�
 * @author:dewey
 * @time : 2018-09-25
 * @param : num int ��ʾ���ֵ�λ��
 * @param : totleFigure int ���ָ���
 * @param : first arr ���ִ������
 **/
using namespace std;

int getDiffNum(int first,int start,int endFigure,int figure[],int totleFigure);
int getTimes(int totleFigure);
int getResult(int num,int totleFigure, int figure[]);
int main(){
    int figure[4];
    int num;
    int totleFigure;
    int j = 0;
    int n;
    cout << "press the num :" << endl;
    cin >> num;
    cout << "press the totleFigure :" << endl;
    cin >> totleFigure;
    cout << "press the figure : " << endl;
    for(int i=0;i<totleFigure;i++){
        cin >> figure[i];
    }
    n = getTimes(totleFigure);//��ȡ������ϸ���
    cout << "��" << n << "����" << endl;
    getResult(num,totleFigure,figure);
}

/**
 * @explain : ��1�׳� Ϊ������������
 * @param : totleFigure int ���ָ���
 **/
int getTimes(int totleFigure){
    int n=1;
    for(int i=1;i<=totleFigure;i++){
        n *= i;
    }
    return n;
}

/**
 * @explain : �����һλ����
 * @param : num int ���ָ���
 * @param : totleFigure int ��������
 * @param : figure arr �����������
 **/
int getResult(int num,int totleFigure, int figure[]){
    int start;
    int diffNum[3];
    int first;

    for(int i=0;i<totleFigure;i++){
        if(i!=0){swap(figure[0],figure[i]);}
        for(int j=0;j<3;j++){
            diffNum[j] = figure[j+1];
        }
        first = figure[0];
        getDiffNum(first,0,num-1,diffNum,totleFigure-1);
        cout << endl;
    }


}

/**
 * @explain : ��ȡ�������ֵ��������
 * @param : first int ������ϵ�һλ����
 * @param : start int �������ֵ�������ϳ�ʼ����
 * @param : num int ���ָ���
 * @param : diffNum arr �����������
 * @param : totleFigure int �������ֵ����������������
 **/
int getDiffNum(int first,int start,int num,int diffNum[],int totleFigure){

    if(start == totleFigure){
        cout << first;
        for(int i=0;i<num;i++){
            cout << diffNum[i];
        }
        cout << "  ";
    }
    for(int j=start;j<totleFigure;j++){
        swap(diffNum[start],diffNum[j]);
        getDiffNum(first,start+1,num,diffNum,totleFigure);
        swap(diffNum[j],diffNum[start]);
    }
}

