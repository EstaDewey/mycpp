#include <iostream>
#include <string>
#include <fstream>

/**
 * @title: ��Ŀ����Ƴ�����ʾ�û�������Ҫ�������ı��ļ����ơ�
                 Ȼ����ʾ�û������Լ����������Ա���ֻ��š�
                 ������Щ��Ϣ���浽�ı��С������Ժ��û����ġ�
 * @author : dewey
 * @time : 2018-11-08
 * @param : Student struct ѧ����Ϣ
 * @param : tag char �ļ���
 **/
using namespace std;
struct Student{
        string name;
        string phonenum;
        string sex;
    };
int main()
{
    //��������
    char tag[100];
    char path[100] = "D:\\dw\\cpp\\deweyCppTest\\file\\%s.txt";
    Student stu;

    //����
    cout << "�������ļ���������exit�˳���" << endl;
    cin >> tag;
    if(tag == "exit"){
        cout << "byebye" << endl;
        return 0;
    }
    cout << "����������������";
    cin >> stu.name;
    cout << "�����������Ա�";
    cin >> stu.sex;
    cout << "�����������ֻ��ţ�";
    cin >> stu.phonenum;

    sprintf(path,"D:\\dw\\cpp\\deweyCppTest\\file\\%s.txt",tag);//�滻�ļ���

    ifstream fin(path);
    ofstream myfile;
    //�ж��ļ��Ƿ����
    if(!fin){//�ļ�������
        myfile.open(path);
        myfile << stu.name << "\n" << stu.sex << "\n" << stu.phonenum;
    }else{
        myfile.open(path, ios::app);//�ļ����ڽ���׷��
        myfile << "\n" << stu.name << "\n" << stu.sex << "\n" << stu.phonenum;
    }
    myfile.close();
    cout << "�ļ������ɹ�" << endl;
}


