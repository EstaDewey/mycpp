#include <iostream>
#include <string>
#include <sstream>
/**
 * @title :要求： 编写一个程序，提示用户输入： 姓名 ，身份证号（需要一次输完，中间用逗号分隔）随后打印用户的星座。
提示：输入功能用C实现会很简单，其他语言的话，就不用输入姓名和逗号了，直接输入身份证号就行了
 * @name :dewey
 * @time : 2018-10-10
 * @param : str string 用户姓名及身份证号码
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
    cout << "请输入姓名及身份证号（用英文','将姓名和身份证隔开）" << endl;
    cin >> str;
    length = str.length();
    for(int j=0;j<length;j++){
        if((int)str[j] == 44){
            isHas = j;
        }
    }
    if(isHas < 0){
        cout << "请用英文逗号进行字符分割" << endl;
        return 0;
    }
    if(length <1 ){
        cout << "请输入相关内容" << endl;
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
    cout << "姓名：" << endl;
    for(int k=0;k<nameSize;k++){
        cout << name[k];
    }
    cout << endl << endl;
    cout << "身份证号：" << endl;
    for(int x=0;x<identitySize;x++){
        cout << identity[x];
    }
    cout << endl << endl;
    cout << "该用户生日为：" << endl;
    for(int n=0;n<4;n++){
        cout << birthday[n];
    }
    cout << endl << endl;
    cout << "该用户星座为：" << endl;
    if(birthday[0] == '1'){
        if(birthday[1] == '0'){ //10月
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 52 && (int)birthday[3] > 47)){
                constellation = "天秤座";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 52) || birthday[2] == '3'){
                constellation = "天蝎座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '1'){ //11月
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 51 && (int)birthday[3] > 47)){
                constellation = "天蝎座";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 51) || birthday[2] == '3'){
                constellation = "射手座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '2'){ // 12月
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 50 && (int)birthday[3] > 47) ){
                constellation = "射手座";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 50) || birthday[2] == '3'){
                constellation = "摩羯座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
    }else{
        if(birthday[1] == '1'){ // 1月
            if(birthday[2] == '0' || birthday[2] == '1'){
                constellation = "摩羯座";
            }else if(birthday[2] == '2'){
                constellation = "水瓶座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '2'){ // 2月
            if(birthday[2] == '0' || (birthday[2] == '1'  && (int)birthday[3] < 57 && (int)birthday[3] > 47) ){
                constellation = "水瓶座";
            }else if((birthday[2] == '1' && birthday[3] == '9') || birthday[2] == '2'){
                constellation = "双鱼座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '3'){ // 3月
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] == '0') ){
                constellation = "双鱼座";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] > 48) || birthday[2] == '3'){
                constellation = "白羊座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '4'){ // 4月
            if(birthday[2] == '0' || birthday[2] == '1'){
                constellation = "白羊座";
            }else if(birthday[2] == '2' || birthday[2] == '3'){
                constellation = "金牛座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '5'){ // 5月
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && birthday[3] == '0') ){
                constellation = "金牛座";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] > 48) || birthday[2] == '3'){
                constellation = "双子座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '6'){ // 6月
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 50 && (int)birthday[3] > 47) ){
                constellation = "双子座";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 50) || birthday[2] == '3'){
                constellation = "巨蟹座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '7'){ // 7月
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 51 && (int)birthday[3] > 47) ){
                constellation = "巨蟹座";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 51) || birthday[2] == '3'){
                constellation = "狮子座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '8'){ // 8月
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 51 && (int)birthday[3] > 47) ){
                constellation = "狮子座";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 51) || birthday[2] == '3'){
                constellation = "处女座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
        if(birthday[1] == '9'){ // 9月
            if(birthday[2] == '0' || birthday[2] == '1' || (birthday[2] == '2' && (int)birthday[3] < 51 && (int)birthday[3] > 47) ){
                constellation = "处女座";
            }else if((birthday[2] == '2' && (int)birthday[3] < 58 && (int)birthday[3] >= 51) || birthday[2] == '3'){
                constellation = "天秤座";
            }else{
                constellation = "生日输入有问题，请确认";
            }
        }
    }
    cout << constellation << endl;
    return 0;
}
