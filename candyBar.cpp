#include <iostream>
#include <string>

/**
 * @title: 题目：CandyBar结构包含3个成员，第一个成员存储candy bar 的品牌名称，
                 第二个成员存储candy bar的重量（可能有小数）。
                 第三个成员存储candy bar的热量（整数）。
                 请编写一个程序，他使用一个这样的函数，即将CandyBar的引用，char指针，double和int作为参数，并用最后三个值设置相应的结构成员，
                 最后3个参数的默认值分别为“Millennium Munch”，2.85，350。
                 另外，该程序还包含一个以CandyBar的引用为参数。
                 并显示结构的内容的函数，请尽可能使用const。
 * @author : dewey
 * @time : 2018-11-06
 * @param : CandyBar struct 糖果
 **/
using namespace std;

int candyBar(string name,double weight,int heat);
int main()
{
    struct CandyBar{
        string candybar_name;
        double candybar_weight;
        int candybar_heat;
    }  CandyBarone = {
        "Millennium Munch",
        2.85,
        350
    };
    START:
    int tag;
    cout << "输入0 显示默认值，输入-1退出，输入其他值自行赋值" << endl;
    cin >> tag;
    if(tag == 0){
        candyBar(CandyBarone.candybar_name,CandyBarone.candybar_weight,CandyBarone.candybar_heat);
    }else if(tag == -1){
        return 0;
    }else{
        CandyBar CandyBartwo;
        cout << "请输入糖果名：";
        cin >> CandyBartwo.candybar_name;
        cout << "请输入糖果质量：";
        cin >> CandyBartwo.candybar_weight;
        cout << "请输入糖果卡路里值：";
        cin >> CandyBartwo.candybar_heat;
        cout << endl;
        candyBar(CandyBartwo.candybar_name,CandyBartwo.candybar_weight,CandyBartwo.candybar_heat);
    }
    goto START;

}
//显示糖果详情函数
int candyBar(string name,double weight,int heat){
    cout << "品牌名称：" << name << endl;
    cout << "重量：" << weight << endl;
    cout << "热量：" << heat << endl << endl;
    return 0;
}

