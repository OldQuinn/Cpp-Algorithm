//
// Created by 韩鸿渐 on 2019/5/1.
//


#include <iostream>
using namespace std;

//编写矩阵转置函数，输入参数为3*3整形数组。编写main函数实现输入输出。

void exchange(int & a, int & b)
{
    int tem = b;
    b = a;
    a = tem;

}

int main()
{
    int a[3][3];
    cout<<"Please enter 9 integers: ";
    for(int i =0; i < 3; i++)
        for (int j =0; j < 3; j++)
            cin>>a[i][j];
    cout<< "Original matrix is: " <<endl;
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j ++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    for(int i =0; i < 3; i++)
        for (int j =0; j < i; j++)
            exchange(a[i][j], a[j][i]);

    cout<< "Transposition matrix is: " <<endl;
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}