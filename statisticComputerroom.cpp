#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

/**
 * @title:��"���Խ���"Ϊ�������ɷ���һ�δ���
 * @author:dewey
 * @time : 2018-09-19
 * @param : roomNum int �����Ҽ���
 * @explain : ��������Ҽ�����ȡ�����Ƕ�Ӧ��Դ��
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

//�������������
int *getComputerRoomMsg(int roomNum){
    int computerNum;
    int statudentNum;
    int teacherNum;
    int course;
    computerNum = 25 * roomNum;//����һ�����Խ�����25̨����
    statudentNum = 25 * roomNum;//����һ�����Խ�����25��ѧ��
    teacherNum = 2 * roomNum;//����һ�����Խ�����Ҫ2����ʦ
    course = 3;//������3�ſγ���Ҫ�õ����Խ���
    cout << roomNum << "����������" << computerNum << "̨����" << endl;
    cout << roomNum << "����������" << statudentNum << "λͬѧ" << endl;
    cout << roomNum << "����������" << teacherNum << "λ��ʦ" << endl;
    cout << roomNum << "�������ҹ�����" << course << "�ſγ�" << endl;
    return 0;
}
