//
// Created by 韩鸿渐 on 2019/3/7.
//

//题目描述
//        已知一个只包含 0 和 1 的二进制数，长度不大于 10 ，将其转换为十进制并输出。
//
//输入描述
//        输入一个二进制整数n，其长度大于0且不大于10
//
//输出描述
//        输出转换后的十进制数， 占一行
//
//样例输入
//          110
//
//样例输出
//          6


# include <iostream>
# include <math.h>

using namespace std;

int main()
{
    int n, length, dec = 0;
    string n_str;
    cout << "请输入一个二进制数：: ";
    cin >> n;
    n_str = to_string(n);
    length = n_str.length();
    while ((!cin.good()) || (length >= 10))
    {
        cin.clear();
        cin.ignore(INT8_MAX, '\n');
        cout << "输入错误！请再次输入输入：";
        cin >> n;
        n_str = to_string(n);
        length = n_str.length();
    }

    for(int i = 0; i < length; i ++)
    {
       int n_v = n_str[i] -48;
       dec = dec + n_v * pow(2, length - i - 1);
//       cout << n_v << endl;;

    }
    cout << dec;
    return 0;
}



