#include <iostream>
#include <iomanip>

using namespace std;
/**
 * @title:��֪������ҫ�Ļ������˻������£�
�������軤��ֵΪX
�������˰ٷֱ�=X/��602+X��
����������˵��
      ���軤��Ϊ100�㣬��ô����ֵΪ100/702=0.14245
�������軤��Ϊ200�㣬��ô����ֵΪ200/802=0.24938
     ��Ƴ��򣬷ֱ��������Ϊ100��200��300��400��500��600��700��800��900��1000��1100��1200��ʱ��
Ӣ�۶��������˺��ļ���ٷֱȡ���д���������ݵó��Ľ��ۡ�(���۷ǳ���Ҫ��������
�����ݵķ�������)
 * @author : dewey
 * @time : 2018-10-12
 * @param : armor int ����
 **/

 int main(){
    double armor;//�û�����Ļ���ֵ
    double armorBasic[12] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};//��������ֵ
    double hurtSubRate;//����ٷֱ�
    double hurtSubRateBasic[12];//����ٷֱ�
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "�����뻤��ֵ����������ĸ�ɲ鿴��������ֵ�ɼ�����˺��ٷֱȣ�" << endl;
    if(cin >> armor){
        hurtSubRate = armor/(602+armor);
        cout << "�û���ֵ�ɼ����˺��İٷֱ�Ϊ��" << hurtSubRate << endl;
    }else{
        cout << "��������ֵ�ɼ����˺��İٷֱ��б�" << endl;
        for(int i=0;i<12;i++){
            hurtSubRateBasic[i] = armorBasic[i]/(602+armorBasic[i]);
            cout << "��������ֵΪ��" << armorBasic[i] << "�ɼ����˺��İٷֱ�:" << hurtSubRateBasic[i] << endl << endl;
        }
        cout << endl;
        cout << "�ɴ˿�֪����ֵ�����˱ȳ�����صݼ���700���ڵĻ���������ߣ�700��1000���ڵĻ��������пɣ�����1000��������ϵͲ��Ƽ�" << endl;
    }
    return 0;
 }
