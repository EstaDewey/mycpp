#include <iostream>

using namespace std;

/**
 * 随机输入五个学生成绩，对其进行排名，并判断是否优良或者及格。
 *90分以上为优
 *80分以上为良
 *60分以上为及格
 *60分以下为不及格
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
            cout << "第"<< i+1 << "为学生成绩为优" << endl;
        }else if(grade[i]<=90 && grade[i]>=80){
            cout << "第"<< i+1 << "为学生成绩为良" << endl;
        }else if(grade[i]<=80 && grade[i]>=60){
            cout << "第"<< i+1 << "为学生成绩为及格" << endl;
        }else{
            cout << "第"<< i+1 << "为学生成绩为不及格" << endl;
        }
    }
}

