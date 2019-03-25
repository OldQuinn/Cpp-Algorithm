//
// Created by 韩鸿渐 on 2019/3/24.
//

//题目描述
//斐波那契数列f(n)满足以下定义：
//
//f(0) = 1, f(1) = 1, f(n) = f(n-1) + f(n-2) (n >= 2)。
//
//请用递归的方法编写函数，对于给定的n，求出斐波那契数列的第n项f(n)

#include <iostream>
using namespace std;

int fib(int n)
{
    if(n < 2)
    {
        return 1;
    }
    else
        return (fib(n - 1) + fib(n - 2));


}

int main()
{
    int n;
    // 这里先不写了输入检测。
    cout << "Please enter an integer: ";
    cin >> n;

    cout << "The answer is: " << fib(n);

    return 0;
}

