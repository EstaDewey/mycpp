#include <iostream>
#include <string>
#include <fstream>

/**
 * @title: 题目：设计程序。提示用户输入想要创建的文本文件名称。
                 然后提示用户输入自己的姓名、性别和手机号。
                 并将这些信息保存到文本中。方便以后用户查阅。
 * @author : dewey
 * @time : 2018-11-08
 * @param : Student struct 学生信息
 * @param : tag char 文件名
 **/
using namespace std;
struct Student{
        string name;
        string phonenum;
        string sex;
    };
int main()
{
    //参数定义
    char tag[100];
    char path[100] = "D:\\dw\\cpp\\deweyCppTest\\file\\%s.txt";
    Student stu;

    //传参
    cout << "请输入文件名（输入exit退出）" << endl;
    cin >> tag;
    if(tag == "exit"){
        cout << "byebye" << endl;
        return 0;
    }
    cout << "请输入您的姓名：";
    cin >> stu.name;
    cout << "请输入您的性别：";
    cin >> stu.sex;
    cout << "请输入您的手机号：";
    cin >> stu.phonenum;

    sprintf(path,"D:\\dw\\cpp\\deweyCppTest\\file\\%s.txt",tag);//替换文件名

    ifstream fin(path);
    ofstream myfile;
    //判断文件是否存在
    if(!fin){//文件不存在
        myfile.open(path);
        myfile << stu.name << "\n" << stu.sex << "\n" << stu.phonenum;
    }else{
        myfile.open(path, ios::app);//文件存在进行追加
        myfile << "\n" << stu.name << "\n" << stu.sex << "\n" << stu.phonenum;
    }
    myfile.close();
    cout << "文件创建成功" << endl;
}


