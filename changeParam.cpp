#include <iostream>
#include <string>

/**
 * @title: ���һ��������������������������x��y�������������������һ��x��y��ֵ������һ���Զ���ĺ����������������д�ӡ������ֵ����ʱx��y��ֵ������
 * @author : dewey
 * @time : 2018-10-30
 * @param : x int Ӣ���ַ���1
 * @param : y int Ӣ���ַ���2
 **/
using namespace std;
int changeParam(int x, int y);
int main()
{
    int x,y;//�ַ���1����

START:
    cout << "���������x(����0 �˳�):" << endl;
    if(cin >> x){
        if(x==0)return 0;
        cout << "���������y" << endl;
        if(cin >> y){
            cout << "x��ֵΪ��" << x<< endl;
            cout << "y��ֵΪ��" << y<< endl<< endl;
            changeParam(x,y);
        }else{
            return 0;
        }
    }else{
        return 0;
    }
goto START;

}
//�����û�����
int changeParam(int x, int y){
    int i;
    i=x;
    x=y;
    y=i;
    cout << "x��ֵΪ��" << x<< endl;
    cout << "y��ֵΪ��" << y<< endl<< endl<< endl;
    return 0;
}
