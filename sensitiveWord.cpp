#include <iostream>
#include <string>
#include <fstream>

/**
 * @title  ���һ�����дʹ��˳�����ʾ�û�����һ���ַ���Ȼ�����д��滻Ϊ*�š��������Լ��ļ��������дʿ�����һ����ĸ����һ����������һ�������ִʣ�����ֻ��Ҫ������ʱ�����û����д���ʲô���ɣ������ַ����е����д��滻Ϊ*��
 * @author : dewey
 * @time : 2018-09-26
 * @param : key int ���δʵ���Ŀ
 * @param : num int ��Ҫ�����������
 * @param : sensitiveWorld string ���δ�
 * @param : setence string ���˵����
 **/
using namespace std;

int getClearWord(string sensitiveWorld[],string setence[],int num,int key);
int main(){
    int num;
    int key;
    cout << "���������δʵ���Ŀ��" << endl;
    cin >> key;
    cout << "��������Ҫ�������������" << endl;
    cin >> num;
    cout << endl;

    string sensitiveWorld[key];
    string setence[num];
    cout << "�����������δ�:" << endl;
    for(int i=0;i<key;i++){
        cin >> sensitiveWorld[i];
    }

    cout << endl << endl;
    cout << "����������˵����:" << endl;
    for(int j=0;j<num;j++){
        cin >> setence[j];
    }
    cout << endl << endl;
    getClearWord(sensitiveWorld,setence,num,key);
    return 0;
}
/**
 * @explain : ���дʹ��˺���
 * @param : key int ���δʵ���Ŀ
 * @param : num int ��Ҫ�����������
 * @param : sensitiveWorld string ���δ�
 * @param : setence string ���˵����
 **/
int getClearWord(string sensitiveWorld[],string setence[],int num,int key){
    int firstPlace;
    int wordSize;
    for(int i=0;i<num;i++){
        for(int j=0;j<key;j++){
            firstPlace = setence[i].find(sensitiveWorld[j]);
            if(firstPlace >=0){
                wordSize = sensitiveWorld[j].size();
                setence[i].replace(firstPlace,wordSize,"****");
                cout << setence[i] << endl;
            }
        }
    }
}
