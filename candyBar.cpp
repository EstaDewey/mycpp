#include <iostream>
#include <string>

/**
 * @title: ��Ŀ��CandyBar�ṹ����3����Ա����һ����Ա�洢candy bar ��Ʒ�����ƣ�
                 �ڶ�����Ա�洢candy bar��������������С������
                 ��������Ա�洢candy bar����������������
                 ���дһ��������ʹ��һ�������ĺ���������CandyBar�����ã�charָ�룬double��int��Ϊ�����������������ֵ������Ӧ�Ľṹ��Ա��
                 ���3��������Ĭ��ֵ�ֱ�Ϊ��Millennium Munch����2.85��350��
                 ���⣬�ó��򻹰���һ����CandyBar������Ϊ������
                 ����ʾ�ṹ�����ݵĺ������뾡����ʹ��const��
 * @author : dewey
 * @time : 2018-11-06
 * @param : CandyBar struct �ǹ�
 **/
using namespace std;

int candyBar(string name,double weight,int heat);
int main()
{
    struct CandyBar{
        string candybar_name;
        double candybar_weight;
        int candybar_heat;
    }  CandyBarone = {
        "Millennium Munch",
        2.85,
        350
    };
    START:
    int tag;
    cout << "����0 ��ʾĬ��ֵ������-1�˳�����������ֵ���и�ֵ" << endl;
    cin >> tag;
    if(tag == 0){
        candyBar(CandyBarone.candybar_name,CandyBarone.candybar_weight,CandyBarone.candybar_heat);
    }else if(tag == -1){
        return 0;
    }else{
        CandyBar CandyBartwo;
        cout << "�������ǹ�����";
        cin >> CandyBartwo.candybar_name;
        cout << "�������ǹ�������";
        cin >> CandyBartwo.candybar_weight;
        cout << "�������ǹ���·��ֵ��";
        cin >> CandyBartwo.candybar_heat;
        cout << endl;
        candyBar(CandyBartwo.candybar_name,CandyBartwo.candybar_weight,CandyBartwo.candybar_heat);
    }
    goto START;

}
//��ʾ�ǹ����麯��
int candyBar(string name,double weight,int heat){
    cout << "Ʒ�����ƣ�" << name << endl;
    cout << "������" << weight << endl;
    cout << "������" << heat << endl << endl;
    return 0;
}

