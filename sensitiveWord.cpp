#include <iostream>
#include <string>
#include <fstream>

/**
 * @title  设计一个敏感词过滤程序，提示用户输入一串字符，然后将敏感词替换为*号。（根据自己的技术，敏感词可以是一个字母或者一个单词甚至一个中文字词，程序只需要在运行时告诉用户敏感词是什么即可，并将字符串中的敏感词替换为*）
 * @author : dewey
 * @time : 2018-09-26
 * @param : key int 屏蔽词的数目
 * @param : num int 需要过滤语句条数
 * @param : sensitiveWorld string 屏蔽词
 * @param : setence string 过滤的语句
 **/
using namespace std;

int getClearWord(string sensitiveWorld[],string setence[],int num,int key);
int main(){
    int num;
    int key;
    cout << "请输入屏蔽词的数目：" << endl;
    cin >> key;
    cout << "请输入需要过滤语句条数：" << endl;
    cin >> num;
    cout << endl;

    string sensitiveWorld[key];
    string setence[num];
    cout << "请输入需屏蔽词:" << endl;
    for(int i=0;i<key;i++){
        cin >> sensitiveWorld[i];
    }

    cout << endl << endl;
    cout << "请输入需过滤的语句:" << endl;
    for(int j=0;j<num;j++){
        cin >> setence[j];
    }
    cout << endl << endl;
    getClearWord(sensitiveWorld,setence,num,key);
    return 0;
}
/**
 * @explain : 敏感词过滤函数
 * @param : key int 屏蔽词的数目
 * @param : num int 需要过滤语句条数
 * @param : sensitiveWorld string 屏蔽词
 * @param : setence string 过滤的语句
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
