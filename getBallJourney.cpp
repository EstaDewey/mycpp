#include <iostream>

/**
 * @title: һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�
 * @author : dewey
 * @time : 2018-10-17
 * @param : heigth int �����ʼ�߶�
 * @param : times int ����ش���
 **/
using namespace std;

int getBallJourney(double heigth, int times);
int main(){
    double heigth;
    int times;

    cout << "�����������ʼ�߶�" << endl;
    if(cin >> heigth && heigth >0){
        cout << "����������ش���" << endl;
        if(cin >> times && times > 0){
            getBallJourney(heigth,times);
        }else{
            cout << "������������" << endl;
            return 0;
        }
    }else{
        cout << "������������" << endl;
        return 0;
    }

}

//����������������ݺ���
int getBallJourney(double heigth, int times){
    double startHeigth = heigth;
    double presentHeigth = 0;
    double totalMeter = (double)heigth;
    double myTrueMeter = (double)heigth;
    int totalTimes = 0;
    while(heigth>0){
        totalMeter += (double)heigth/2;
        totalTimes++;
        if(totalTimes <= times){
            myTrueMeter += (double)heigth/2;
        }
        heigth = heigth/2;
        if(totalTimes == times){
            presentHeigth = heigth;
        }
    }
    cout << "���" << startHeigth << "�����¹�����" << totalTimes << "�κ��ٵ��𡣹�����" << totalMeter << "��" << endl;
    if(times > totalTimes){
        cout << "�������߶��������ֻ�ܵ���" << totalTimes << "��" << endl;
        cout << "���" << startHeigth << "�����¾���ָ��" << totalTimes << "�κ󹲾���" << myTrueMeter << "��,��ǰ�����߶�Ϊ" << presentHeigth << "��" << endl;
    }else{
        cout << "���" << startHeigth << "�����¾���ָ��" << times << "�κ󹲾���" << myTrueMeter << "��,��ǰ�����߶�Ϊ" << presentHeigth << "��" << endl;
    }
    return 0;
}
