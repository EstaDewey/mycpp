#include <iostream>
#include <math.h>
using namespace std;

/**
 * @question :ĳ����˾���ù��õ绰�������ݣ���������λ������  9527 ���ڴ��ݹ������Ǽ��ܵģ����ܹ������£�ÿλ���ֶ�����5,Ȼ���úͳ���10��������������֣��ٽ���һλ�͵���λ�������ڶ�λ�͵���λ��������������ܺ�����֡�
 * @author :dewey
 * @param : num int �������
 **/
int main(){
    int num;//ԭʼ����
    int one,two;//���ֽ���ʱ�������ʱ����
    int countnum = 0;//����λ��
    int digit[10];//���ÿλ���ֵ�����
    double resultNum = 0; //����������
    cout << "please press the Num to encypt:" << endl;
    cin >> num;
    //��ȡÿλ���ֲ�����5,Ȼ���úͳ���10���������������
    while(num != 0){
        digit[countnum] = (num%10+5)%10;
        countnum++;
        num = num/10;
    }
    //һ��λ����
    if(countnum>=4){
        one = digit[0];
        digit[0] = digit[3];
        digit[3] = one;
    }
    //����λ����
    if(countnum>=3){
        two = digit[1];
        digit[1] = digit[2];
        digit[2] = two;
    }
    //���ɼ��ܺ������
    for(int i=0;i<countnum;i++){
        resultNum = resultNum+digit[i]*pow(10,i);
    }
    cout << "the resault NUM is :" << endl;
    cout << resultNum << endl;
}
