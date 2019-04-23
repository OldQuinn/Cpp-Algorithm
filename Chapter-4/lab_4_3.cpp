//
// Created by hongjian.han on 2019/4/9.
//

/*
一元二次方程求解


题目描述:

对于一元二次方程ax^2 + bx + c = 0,解可以分为很多情况。

若该方程有两个不相等实根，首先输出1，换行，然后从小到大输出两个实根，换行；

若该方程有两个相等实根，首先输出2，换行，然后输出这个这个实根，换行；

若该方程有一对共轭复根，输出3，换行；

若该方程有无解，输出4，换行；

若该方程有无穷个解，输出5，换行；

若该方程只有一个根，首先输出6，换行，然后输出这个跟，换行；



要求使用c++ class编写程序。可以创建如下class:

                #include <iostream>
                #include <cmath>
                using namespace std;
                class Equation{
                private:
                    int _a, _b, _c;
                public:
                    Equation(int a, int b, int c){
                    }
                    void solve(){
                    }
                };
                int main(){
                    int a, b, c;
                    cin >> a >> b >> c;
                    Equation tmp(a, b, c);
                    tmp.solve();
                    return 0;
                }



输入描述:
    该一元二次方程的系数a,b,c，且-100=<a,b,c<=100

输出描述:
    解的情况。输出解的时候保留两位小数

样例输入:
    1 4 3

样例输出:
    1
    -3.00 -1.00

*/




#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Equation {
private:
    int _a, _b, _c;
public:
    Equation(int a, int b, int c);
    void solve();
};

Equation::Equation(int a, int b, int c) :_a(a), _b(b), _c(c) {}
void Equation::solve() {

    double answer;
    if (_a == 0 and _b == 0) {
        if (_c == 0)
            cout << 5 << endl;
        else
            cout << 4 << endl;
        return;
    }
    else if (_a == 0) {
        cout << 6 << endl;
        answer = -_c / (double)_b;
        cout << setiosflags(ios::fixed);
        cout << setprecision(2) << answer << endl;
        return;
    }

    double x1, x2, d;
    d = _b * _b - 4 * _a * _c;

    if (d < 0 and _a != 0)
        cout << 3 << endl;
    else if (d == 0 and _a != 0) {
        cout << 2 << endl;
        answer = -_b / 2.0 / (double)_a;
        cout << setiosflags(ios::fixed);
        cout << setprecision(2) << answer << endl;
    }
    else {
        cout << 1 << endl;
        x1 = (-_b + sqrt(d)) / 2.0 / (double)_a;
        x2 = (-_b - sqrt(d)) / 2.0 / (double)_a;
        cout << setiosflags(ios::fixed);
        if (x2 < x1)
            cout << setprecision(2) << x2 << " " << setprecision(2) << x1 << endl;
        else
            cout << setprecision(2) << x1 << " " << setprecision(2) << x2 << endl;
    }
}


int main() {

    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();


    return 0;
}
