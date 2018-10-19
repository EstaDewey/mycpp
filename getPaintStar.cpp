#include <iostream>

/**
 * @title : 为庆祝祖国母亲生日，请打印一个五角星。根据自己的技术，这个五角星不一定非要是标准、规则的五角星。
 *可以是其他图形（如三角形）摆成的“抽象”五角星。
 * @author : dewey
 * @time : 2018-09-29
 **/
using namespace std;

int print(int(*p)[62]);
int star(int(*p)[62], int i, int j, int n);
int main()
{
    int a[20][62] = { 0 };
    star(a, 2, 25, 3);
    print(a);
    return 0;
}

int print(int(*p)[62])
{
    int i, i2 = 0, j, j2 = 49;
    for (i = 0; i < 20; i++)
    {
        cout << " ";
        for (j = 0; j<62; j++)
        {
            if (i == i2 || i == i2 + 1)
                if (j>j2&&j < j2 + 13)
                    continue;
            if (*(*(p + i) + j) == 1 || *(*(p + i) + j) == 2)
                cout << '*';
            else if (*(*(p + i) + j) == 3 || *(*(p + i) + j) == 4)
                cout << '*';
            else
                cout << " ";
        }
        cout << " " << endl;
    }
    return 0;

}
int star(int(*p)[62], int i, int j, int n)
{
    int k, l, a, b;
    for (k = 0; k < 18; k++, i++, j++)
    {
        *(*(p + i) + j) = n;
        if (k > 7 && k < 11)
            *(*(p + i) + j) = 0;
    }
    i--, j--;
    for (k = 0; k < 11; k++, i--, j -= 4)
    {
        *(*(p + i) + j) = n;
        if (k > 4 && k < 7)
            *(*(p + i) + j) = 0;
    }
    i++, j += 4;
    for (k = 0; k < 47; k++, j++)
    {
        *(*(p + i) + j) = n;
    }
    j--;
    for (k = 0; k < 11; k++, i++, j -= 4)
    {
        *(*(p + i) + j) = n;
        if (k > 3 && k < 6)
            *(*(p + i) + j) = 0;
    }
    i--, j += 4;
    for (k = 0; k < 18; k++, i--, j++)
    {
        *(*(p + i) + j) = n;
        if (k > 6 && k < 10)
            *(*(p + i) + j) = 0;
    }
    i++, j--;
    a = i, b = j;
    i++, j++;
    for (k = 1; k < 17; k++, i++, j++)
        for (l = j - 1; *(*(p + i) + l) != n; l--)
            *(*(p + i) + l) = n + 1;
    i = a, j = b;
    i++, j--;
    for (k = 1; k < 17; k++, i++, j--)
        for (l = j + 1; *(*(p + i) + l) != n; l++)
            *(*(p + i) + l) = n + 1;

    return 0;
}

