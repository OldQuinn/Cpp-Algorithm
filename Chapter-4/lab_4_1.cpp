//
// Created by hongjian.han on 2019/4/8.
//

/*
最大公约数

题目描述:
    求两个正整数a 和 b的最大公约数。


要求使用c++ class编写程序。可以创建如下class:

    #include <iostream>
    using namespace std;
    class Integer {
    private:
        int _num;
    public:
    //构造函数
        Integer(int num) {
        }
    //计算当前Integer 和 b之间的最大公约数
        int gcd(Integer b) {
        }
    };
    int main(){
        int a, b;
        cin >> a >> b;
        Integer A(a);
        Integer B(b);
        cout << A.gcd(B) << endl;
        return 0;
    }

输入描述:
    两个正整数a,b，并且1=<a,b <=10000

输出描述:
    a和b的最大公约数

样例输入:
    1000 1000

样例输出:
    1000

*/

#include <iostream>
using namespace std;

class Integer{
private:
    int _num;

public:
    //构造函数
    Integer(int num)
    {
        _num = num;
    }

    int get_num()
    {
        return _num;
    }

    //计算当前Integer 和 b之间的最大公约数
    int gcd(Integer b)
    // 理论：
    // gcd(a, b) = gcd(b, a%b)   其中，a%b是a除以b所得的余数。
    // 就是说 (a, b) 的最大公约数就是 (b, a%b) 的最大公约数。
    // a % b 得余数 r
    // 若r == 0，则 b 即为GCD
    // 若r != 0，则 a = b, b = r，返回步骤1
    {
        int a_n = _num;
        int b_n = b.get_num();
        int r = a_n % b_n;
        while(r != 0)
        {
            a_n = b_n;
            b_n = r;
            r = a_n % b_n;
        }
        return b_n;
    }

    ~ Integer(){};
};
int main(){
    int a, b;
    cout << "Please enter the first number: ";
    cin >> a ;
    cout << "Please enter the second number: ";
    cin >> b ;
    Integer A(a);
    Integer B(b);
    cout << "Greatest common factor is " << A.gcd(B) << endl;
    return 0;
}


