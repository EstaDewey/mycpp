#include <iostream>
#include <string>

/**
 * @title: ���˼�ָ�����һ��Ȥζ��ѧ�⣺��30���ˣ����������ˡ�Ů�˺�С������һ�ҷ�����Է���������50���
 *         ÿ�����˸���3���ÿ��Ů�˸���2���ÿ��С������1��������ˡ�Ů�˺�С�����м�����
 * @author : dewey
 * @time : 2018-10-23
 * @param : people int ����
 * @param : money int ���
 **/
using namespace std;

int main()
{
    int people;
    int money;
    int man;
    int woman;
    int chlidren;

    START:
        cout << "������������" << endl;
        cin >> people;
        cout << "�������" << endl;
        cin >> money;
    for(man = 0; man < money/3; man++){
		for(woman = 0; woman < (money-3*man)/2; woman++) {
			if(man*3+woman*2+(people-man-woman)*1 == money) {
                if(man !=0 && woman != 0){
                    cout << "���ˣ�" << man << "Ů�ˣ�" << woman << "��ͯ��" << people-man-woman << endl;
                }

			}
		}
    }
    if(money == 0 ){
        return 0;
    }else{
        goto START;
    }
}
