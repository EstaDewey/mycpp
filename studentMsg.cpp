#include <iostream>
#include <string>

/**
 * @title: ��Ŀ�����һ���ɼ�������򡣳���ѯ���û�����Ҫ�������λͬѧ����Ϣ��n����Ȼ�������������ֶ�ȡn��ͬѧ����Ϣ��
                 ÿλͬѧ����Ϣ������
                 ���䣺�������Ա�ѧ�ţ�Ժϵ��
                 ʹ��һ���ṹ���������洢��Щ��Ϣ��
                 ����¼����ɺ��������ͬѧ����Ϣ��
 * @author : dewey
 * @time : 2018-11-07
 * @param : Student struct ѧ��
 * @param : int msgnum ��Ϣ����
 **/
using namespace std;
struct Student{
        string name;
        int age;
        string sex;
        int studentNum;
        string school;
    };

int getStudentsMsg(struct Student stu[],int tag);
int main()
{
    START:
    int tag;
    cout << "������ѧ������������0�˳���" << endl;
    cin >> tag;
    if(tag < 1){
        cout << "û�������Ϣ���룬�˳�ϵͳ" << endl;
        return 0;
    }
    Student stu[tag];
    for(int i=0;i<tag;i++){
        cout << "������ѧ��" << i+1 << "��������";
        cin >> stu[i].name;
        cout << "������ѧ��" << i+1 << "�����䣺";
        cin >> stu[i].age;
        cout << "������ѧ��" << i+1 << "���Ա�";
        cin >> stu[i].sex;
        cout << "������ѧ��" << i+1 << "��ѧ�ţ�";
        cin >> stu[i].studentNum;
        cout << "������ѧ��" << i+1 << "��Ժϵ��";
        cin >> stu[i].school;
        cout << endl;

    }

    getStudentsMsg(stu,tag);
    goto START;

}
//��ʾѧ����Ϣ����
int getStudentsMsg(struct Student stu[],int tag){
    for(int i=0;i<tag;i++){
        cout << "��" << i+1 << "λͬѧ��" << endl;
        cout << "����" << stu[i].name << endl;
        cout << "����" << stu[i].age << endl;
        cout << "�Ա�" << stu[i].sex << endl;
        cout << "ѧ�ţ�" << stu[i].studentNum << endl;
        cout << "Ժϵ��" << stu[i].school << endl ;
        cout << "--------------" << endl << endl;
    }

    return 0;
}


