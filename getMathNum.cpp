#include <iostream>
using namespace std;

/**
 * ��д�����������������ܡ����1~100֮���ܹ���3��7���������ܹ�ͬʱ��3��7���������ֵĸ�����
 * @author : dewey
 * @param num int ��ȡ���㷶Χ������
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

//���㺯��
int* getMathNum(int num,int res[]){
    int j=0;//�������keyֵ
    for(int i=1;i<=num;i++){
        if((i%3 ==0 || i%7==0) && !(i%3 == 0 && i%7 == 0) ){
            res[j]=i;
            j++;
        }
    }
    return res;
}
//�����ʽ����
void getFormat(int *arr){
    for(int k=0;k<=38;k++){
        cout << "arr[" << k << "]=" << arr[k]<< endl;
    }
}
