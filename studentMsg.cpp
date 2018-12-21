#include <iostream>
#include <string>

/**
 * @title: 题目：设计一个成绩管理程序。程序询问用户输入要输入多少位同学的信息（n）。然后根据输入的数字读取n个同学的信息。
                 每位同学的信息包括：
                 年龄：姓名：性别：学号：院系：
                 使用一个结构体数组来存储这些信息。
                 并在录入完成后输出所有同学的信息。
 * @author : dewey
 * @time : 2018-11-07
 * @param : Student struct 学生
 * @param : int msgnum 信息条数
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
    cout << "请输入学生数量（输入0退出）" << endl;
    cin >> tag;
    if(tag < 1){
        cout << "没有相关信息输入，退出系统" << endl;
        return 0;
    }
    Student stu[tag];
    for(int i=0;i<tag;i++){
        cout << "请输入学生" << i+1 << "的姓名：";
        cin >> stu[i].name;
        cout << "请输入学生" << i+1 << "的年龄：";
        cin >> stu[i].age;
        cout << "请输入学生" << i+1 << "的性别：";
        cin >> stu[i].sex;
        cout << "请输入学生" << i+1 << "的学号：";
        cin >> stu[i].studentNum;
        cout << "请输入学生" << i+1 << "的院系：";
        cin >> stu[i].school;
        cout << endl;

    }

    getStudentsMsg(stu,tag);
    goto START;

}
//显示学生信息函数
int getStudentsMsg(struct Student stu[],int tag){
    for(int i=0;i<tag;i++){
        cout << "第" << i+1 << "位同学：" << endl;
        cout << "姓名" << stu[i].name << endl;
        cout << "年龄" << stu[i].age << endl;
        cout << "性别" << stu[i].sex << endl;
        cout << "学号：" << stu[i].studentNum << endl;
        cout << "院系：" << stu[i].school << endl ;
        cout << "--------------" << endl << endl;
    }

    return 0;
}


