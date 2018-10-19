#include <iostream>
#include <iomanip>

using namespace std;
/**
 * @title:已知王者荣耀的护甲免伤机制如下：
　　假设护甲值为X
　　减伤百分比=X/（602+X）
　　举例来说，
      假设护甲为100点，那么减伤值为100/702=0.14245
　　假设护甲为200点，那么减伤值为200/802=0.24938
     设计程序，分别输出护甲为100、200、300、400、500、600、700、800、900、1000、1100、1200点时，
英雄对于物理伤害的减免百分比。并写出根据数据得出的结论。(结论非常重要，考察大家
对数据的分析能力)
 * @author : dewey
 * @time : 2018-10-12
 * @param : armor int 护甲
 **/

 int main(){
    double armor;//用户输入的护甲值
    double armorBasic[12] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};//基础护甲值
    double hurtSubRate;//减免百分比
    double hurtSubRateBasic[12];//减免百分比
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "请输入护甲值：（输入字母可查看基础护甲值可减免的伤害百分比）" << endl;
    if(cin >> armor){
        hurtSubRate = armor/(602+armor);
        cout << "该护甲值可减免伤害的百分比为：" << hurtSubRate << endl;
    }else{
        cout << "基础护甲值可减免伤害的百分比列表" << endl;
        for(int i=0;i<12;i++){
            hurtSubRateBasic[i] = armorBasic[i]/(602+armorBasic[i]);
            cout << "基础护甲值为：" << armorBasic[i] << "可减免伤害的百分比:" << hurtSubRateBasic[i] << endl << endl;
        }
        cout << endl;
        cout << "由此可知护甲值与免伤比成正相关递减，700以内的护甲收益最高，700到1000以内的护甲收益尚可，超过1000护甲收益较低不推荐" << endl;
    }
    return 0;
 }
