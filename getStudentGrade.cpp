#include <iostream>

using namespace std;

/**
 * ����������ѧ���ɼ�������������������ж��Ƿ��������߼���
 *90������Ϊ��
 *80������Ϊ��
 *60������Ϊ����
 *60������Ϊ������
 *
 **/
int getStudentGrade(int grade[]);
int main(){
    int grade[5];
    int *ret;
    cout << "pless press the first student`s grade:" << endl;
    cin >> grade[0];
    cout << "pless press the second student`s grade:" << endl;
    cin >> grade[1];
    cout << "pless press the third student`s grade:" << endl;
    cin >> grade[2];
    cout << "pless press the fourth student`s grade:" << endl;
    cin >> grade[3];
    cout << "pless press the fifth student`s grade:" << endl;
    cin >> grade[4];

    cout << "the result :" << endl;
    getStudentGrade(grade);

}

int getStudentGrade(int grade[]){
    for(int i=0;i<5;i++){
        if(grade[i]>=90){
            cout << "��"<< i+1 << "Ϊѧ���ɼ�Ϊ��" << endl;
        }else if(grade[i]<=90 && grade[i]>=80){
            cout << "��"<< i+1 << "Ϊѧ���ɼ�Ϊ��" << endl;
        }else if(grade[i]<=80 && grade[i]>=60){
            cout << "��"<< i+1 << "Ϊѧ���ɼ�Ϊ����" << endl;
        }else{
            cout << "��"<< i+1 << "Ϊѧ���ɼ�Ϊ������" << endl;
        }
    }
}

