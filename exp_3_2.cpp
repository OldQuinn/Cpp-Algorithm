//
// Created by 韩鸿渐 on 2019/3/24.
//

#include <iostream>
#include <cmath>
using namespace std;

// Practice 1: 分别编写四个同名函数 max1，实现函数重组，分别可求取两个int，三个int，两个double，和三个double的的最大值。

int max1(int x, int y)  //two integers
{
    if (x >= y)
        return x;
    else
        return y;
}

int max1(int x, int y, int z)  //three integers
{
    return max1(max1(x, y), z);
}

double max1(double x, double y) // two float
{
    if (abs(x - y) < 1e-10)   //判断两个浮点数是否相等常用的方式，具体大小根据自己的需求设定。
        return x;
    else if (x >= y)
        return x;
    else
        return y;
}

double max1(double x, double y, double z)  //three float
{
    return max1(max1(x, y), z);
}

int main()
{
    int x, y, z;
    double a, b, c;
    cout << "Please enter two integers: ";
    cin >> x >> y;
    cout << "The maximum number of two integers is: " << max1(x, y) << endl;

    cout << "Please enter three integers: ";
    cin >> x >> y >> z;
    cout << "The maximum number of two integers is: " << max1(x, y, z)<< endl;

    cout << "Please enter two float numbers: ";
    cin >> a >> b;
    cout << "The maximum number of two float numbers is: " << max1(a, b)<< endl;

    cout << "Please enter three float numbers: ";
    cin >> a >> b >> c;
    cout << "The maximum number of three float numbers is: " << max1(a, b, c)<< endl;
    return 0;
}



// Practice 2: 调用 camth 中的 pow 函数计算x的y次幂的结果。

//int main()
//{
//    int x, y;
//    cout << "Please enter two integers: ";
//    cin >> x >>y;
//    cout << "The result is: " << pow(x, y);
//    return 0;
//}
