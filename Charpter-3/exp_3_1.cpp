//
// Created by 韩鸿渐 on 2019/3/23.
//

// 用递归函数实现斐波那契数列的表达式。

#include <iostream>
using namespace std;

int fib(int n)
{
    if(n < 3)
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
