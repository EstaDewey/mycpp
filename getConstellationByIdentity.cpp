#include <iostream>
#include <string>
#include <sstream>
/**
 * @title :Ҫ�� ��дһ��������ʾ�û����룺 ���� �����֤�ţ���Ҫһ�����꣬�м��ö��ŷָ�������ӡ�û���������
��ʾ�����빦����Cʵ�ֻ�ܼ򵥣��������ԵĻ����Ͳ������������Ͷ����ˣ�ֱ���������֤�ž�����
 * @name :dewey
 * @time : 2018-10-10
 * @param : str string �û����������֤����
 **/
using namespace std;

int main(){
    string str;
    string name;
    string identity;
    string birthday;
    string constellation;
    int isHas = -1;
    int length;
    int nameSize = 0;
    int identitySize = 0;
    int birthdayNum;
    cout << "���������������֤�ţ���Ӣ��','�����������֤������" << endl;
    cin >> str;
    length = str.length();
    for(int j=0;j<length;j++){
        if((int)str[j] == 44){
            isHas = j;
        }
    }
    if(isHas < 0){
        cout << "����Ӣ�Ķ��Ž����ַ��ָ�" << endl;
        return 0;
    }
    if(length <1 ){
        cout << "�������������" << endl;
        return 0;
    }else{
        for(int i=0;i<length;i++){
            if(i < isHas){
                name[i] = str[i];
                nameSize++;
            }
            if(i > isHas){
                identity[i-isHas-1] = str[i];
                identitySize++;
                if((i-isHas-1) >= 10 && (i-isHas-1) <= 13){
                   birthday[i-isHas-1-10] = str[i];
                }
            }
        }
    }
    cout << "������" << endl;
    for(int k=0;k<nameSize;k++){
        cout << name[k];
    }
    cout << endl << endl;
    cout << "���֤�ţ�" << endl;
    for(int x=0;x<identitySize;x++){
        cout << identity[x];
    }
    cout << endl << endl;
    cout << "���û�����Ϊ��" << endl;
    for(int n=0;n<4;n++){
        cout << birthday[n];
    }
    cout << endl << endl;
    cout << "���û�����Ϊ��" << endl;
    if(birthday[0] == '1'){
        if(birthday[1] == '0'){ //10��
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 52 && (int)birthday[3] > 47)){
                constellation = "�����";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 52) || birthday[2] == '3'){
                constellation = "��Ы��";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '1'){ //11��
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 51 && (int)birthday[3] > 47)){
                constellation = "��Ы��";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 51) || birthday[2] == '3'){
                constellation = "������";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '2'){ // 12��
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 50 && (int)birthday[3] > 47) ){
                constellation = "������";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 50) || birthday[2] == '3'){
                constellation = "Ħ����";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
    }else{
        if(birthday[1] == '1'){ // 1��
            if(birthday[2] == '0' || birthday[2] == '1'){
                constellation = "Ħ����";
            }else if(birthday[2] == '2'){
                constellation = "ˮƿ��";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '2'){ // 2��
            if(birthday[2] == '0' || (birthday[2] == '1'  && (int)birthday[3] < 57 && (int)birthday[3] > 47) ){
                constellation = "ˮƿ��";
            }else if((birthday[2] == '1' && birthday[3] == '9') || birthday[2] == '2'){
                constellation = "˫����";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '3'){ // 3��
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] == '0') ){
                constellation = "˫����";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] > 48) || birthday[2] == '3'){
                constellation = "������";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '4'){ // 4��
            if(birthday[2] == '0' || birthday[2] == '1'){
                constellation = "������";
            }else if(birthday[2] == '2' || birthday[2] == '3'){
                constellation = "��ţ��";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '5'){ // 5��
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && birthday[3] == '0') ){
                constellation = "��ţ��";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] > 48) || birthday[2] == '3'){
                constellation = "˫����";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '6'){ // 6��
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 50 && (int)birthday[3] > 47) ){
                constellation = "˫����";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 50) || birthday[2] == '3'){
                constellation = "��з��";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '7'){ // 7��
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 51 && (int)birthday[3] > 47) ){
                constellation = "��з��";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 51) || birthday[2] == '3'){
                constellation = "ʨ����";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '8'){ // 8��
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 51 && (int)birthday[3] > 47) ){
                constellation = "ʨ����";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 51) || birthday[2] == '3'){
                constellation = "��Ů��";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
        if(birthday[1] == '9'){ // 9��
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 51 && (int)birthday[3] > 47) ){
                constellation = "��Ů��";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 51) || birthday[2] == '3'){
                constellation = "�����";
            }else{
                constellation = "�������������⣬��ȷ��";
            }
        }
    }
    cout << constellation << endl;
    return 0;
}
