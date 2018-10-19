#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

/**
 * @title:以"电脑教室"为主题自由发挥一段代码
 * @author:dewey
 * @time : 2018-09-19
 * @param : roomNum int 电脑室间数
 * @explain : 输入电脑室间数获取电脑是对应资源数
 **/
int *getComputerRoomMsg(int roomNum);

int main(){
    int roomNum;
    int *res;
    cout << "please press the num of computer room:" << endl;
    cin >> roomNum;

    res = getComputerRoomMsg(roomNum);
    return 0;
}

//电脑室相关需求
int *getComputerRoomMsg(int roomNum){
    int computerNum;
    int statudentNum;
    int teacherNum;
    int course;
    computerNum = 25 * roomNum;//假设一个电脑教室有25台电脑
    statudentNum = 25 * roomNum;//假设一个电脑教室有25名学生
    teacherNum = 2 * roomNum;//假设一个电脑教室需要2个老师
    course = 3;//假设有3门课程需要用掉电脑教室
    cout << roomNum << "个电脑室需" << computerNum << "台电脑" << endl;
    cout << roomNum << "个电脑室需" << statudentNum << "位同学" << endl;
    cout << roomNum << "个电脑室需" << teacherNum << "位老师" << endl;
    cout << roomNum << "个电脑室共开设" << course << "门课程" << endl;
    return 0;
}
