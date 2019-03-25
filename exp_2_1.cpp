//
// Created by 韩鸿渐 on 2019/2/27.
//

#include <iostream>
using namespace std;

// practice 1: 显示出不同类型所用的字节数
//int main()
//{
//    cout << "The size of an int is " << sizeof(int) << " bytes. \n";
//    cout << "The size of a short is " << sizeof(short) << " bytes. \n";
//    cout << "The size of a long is " << sizeof(long) << " bytes. \n";
//    cout << "The size of a float is " << sizeof(float) << " bytes. \n";
//    cout << "The size of a double is " << sizeof(double) << " bytes. \n";
//    return 0;
//}


// practice 2: 这里给出的例子是由数据类型的定义而引发的错误，由于对于x的定义是unsigned int，所以运行下面的代码输出的结果是：
//The difference is 50
//Now the difference is 4294967246
// 把 int x 前面的 unsigned 删去即可。
//int main()
//{
//    unsigned int x;
//    unsigned  int y = 100;
//    unsigned  int z = 50;
//    x = y - z;
//    cout << "The difference is " << x << endl;
//    x = z - y;
//    cout << "Now the difference is " << x << endl;
//    return 0;
//}


// practice 3: 输出 a 和 b 的差。
int main()
{
    int a, b, x;
    cout << "Input value of a." << endl;
    cin >> a;
    cout << "Input value of b." << endl;
    cin >> b;
    x = (a - b) > 0? (a - b): (b - a);
    cout << "THe difference of a and b is " << x;
    return 0;
}