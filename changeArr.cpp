#include <iostream>

using namespace std;

int main(){
    int a[4][4] = {
        {1,2,3,4},
        {5,6,7,7},
        {9,10,11,12},
        {13,14,15,16}
    };
    int b[4][4];

    cout << "原始数组：" << endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << a[i][j] << "   ";
            b[j][i] = a[i][j];
        }
        cout << endl;
    }
    cout << "变形数组：" << endl;
    for(int k=0;k<4;k++){
        for(int h=0;h<4;h++){
            cout << b[k][h] << "   ";
        }
        cout << endl;
    }
}
