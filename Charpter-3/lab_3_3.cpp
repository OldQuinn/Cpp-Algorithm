//
// Created by 韩鸿渐 on 2019/3/24.
//

//题目描述
//        只包含因子2,3,5的正整数被称作丑数，比如4,10,12都是丑数，而7,23,111则不是丑数，
//        另外1也不是丑数。请编写一个函数，输入一个整数n，能够判断该整数是否为丑数，如果是，则输出True，否则输出False。
//
//输入描述
//
//         1 <= n<= 1000000
//
//输出描述
//        对于每一行输入，输出其是否为丑数，是则输出True，否则输出False


# include <iostream>
using namespace std;

bool isUgly(unsigned x)
{
    if (x == 1)
        return false;
    else
        {
        while (x % 2 == 0) {
            x = x / 2;
        }
        while (x % 3 == 0) {
            x = x / 3;
        }
        while (x % 5 == 0) {
            x = x / 5;
        }

        if (x == 1)
            return true;
        else
            return false;
    }
}

int main()
{
    int n;
    cout << "Plase enter an positive integer:";
    cin >> n;
    if (isUgly(n))
        cout << "True";
    else
        cout << "False";
    return 0;
}
