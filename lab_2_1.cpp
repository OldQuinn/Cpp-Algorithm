//
// Created by 韩鸿渐 on 2019/3/7.
//

# include <iostream>
# include <typeinfo>

using namespace std;

//任意给定 n 个整数，求这 n 个整数序列的和、最小值、最大值
//
//输入描述: 输入一个整数n，代表接下来输入整数个数，0 < n <= 100，接着输入n个整数，整数用int表示即可。
//
//输出描述: 输出整数序列的和、最小值、最大值。用空格隔开，占一行
int main()
{



    int n,input;
    int sum_value = 0, max_value = -100000, min_value = 1000000;
    cout << "请输入一个数字：";
    cin >> n;
    while ((!cin.good()) || (n <= 0) || (n > 100))
    {
        cin.clear();
        cin.ignore(INT8_MAX, '\n');
        cout << "输入错误！请再次输入输入：";
        cin >> n;
    }

    for (int k = 1; k <= n; k ++)
    {
        cout << "Please enter a an integer: ";
        cin >> input;
        sum_value = sum_value + input;
        if (input > max_value)
        {
            max_value = input;
        }

        if (input < min_value)
        {
            min_value = input;
        }
    }

    cout << sum_value << " " << min_value << " " << max_value;
    return 0;
}




