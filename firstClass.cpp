#include <iostream>
#include <string>
/**
 *  @title: 定义一个类，来表示银行账户，数据成员包括储户姓名、账号和存款
 *      成员函数执行如下操作:
 *      1.创建一个对象并初始化
 *      2.显示储户姓名、账号和存款
 *      3.存入参数指定的存款
 *      4.取出参数指定的款项
 *  @author : dewey
 *  @time : 2018-10-11
 *  @param : money double 金额
 *  @param : opt int 资金操作
 **/
using namespace std;
//账户操作类
class GetCount
{
    public:

        GetCount(double money,string name);
        CreateBasicInfo();//创建账号
        Deposit(double money);//存款
        Withdrawal(double money);//取款

    private:
        string name_t;
        string acount;
        static double money_t;

};
// 构造函数
GetCount::GetCount(double money,string name){
    name_t = name;
}
//账户基础信息显示
int GetCount::CreateBasicInfo(){
    acount = "1102";
    cout << "姓名：" << name_t << endl;
    cout << "账号：" << acount << endl;
    cout << "存款：" << money_t << endl;
    return 0;
}
//存款函数
int GetCount::Deposit(double money){
    money_t = money_t+money;
    cout << "您成功存入：" << money << "元" << endl;
    return money_t;
}
//取款函数
int GetCount::Withdrawal(double money){
    if(money_t >= money){
        money_t = money_t-money;
        cout << "您成功取出：" << money << "元" << endl;
        return money_t;
    }else{
        cout << "余额不足" << endl;
        return 0;
    }


}

double GetCount::money_t = 20.00;

int main(){
    double money; //金额
    int opt; //操作
    string name = "张三"; //账户名
    cout << "请输入金额" << endl;
    if(cin >> money){
        cout << "请输入执行的操作，1：存款；2：取款" << endl;
        cin >> opt;
        if(opt < 1 || opt > 2){
            cout << "请输入1或2！" << endl;
            return 0;
        }
        GetCount GetCount(money,name);
        if(opt == 1){
            GetCount.Deposit(money);
        }
        if(opt == 2){
            GetCount.Withdrawal(money);//取款
        }
        cout << endl;
        cout << "当前账户状态:" << endl << endl;
        GetCount.CreateBasicInfo();

        return 0;
    }else{
        cout << "非法输入，请确认！" << endl;
        return 0;
    }
}
