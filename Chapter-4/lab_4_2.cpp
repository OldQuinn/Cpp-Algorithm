//
// Created by hongjian.han on 2019/4/9.
//

/*
反转整数

题目描述：
    对于输入的一个正整数，输出其反转形式


要求使用c++ class编写程序。可以创建如下class：

            #include <iostream>
            using namespace std;

            class Integer{
            private:
                int _num;
            //getLength()函数获取_num长度
                int getLength(){
                }
            public:
            //Integer类构造函数
                Integer(int num){
                }
            //反转_num
                int inversed(){
                }
            };

            int main() {
                int n;
                cin >> n;
                Integer integer(n);
                cout << integer.inversed() << endl;
                return 0;
            }


输入描述：
    一个正整数a ，且1=<a<=1,000,000,000


输出描述：
    a的反转形式


样例输入：
        1011

样例输出：
        1101


*/




#include <iostream>
using namespace std;

class Integer{

private:
    int _num;

    int getLength()   //getLength()函数获取_num长度
    {   string num_str = to_string(_num);
        return num_str.length();
    }

public:
    //Integer类构造函数
    Integer(int num)
    {
        _num = num;
    }
    //反转_num
    int inversed()
    {
        int t = _num;
        int inv = 0;
        while(t !=0)
        {
            inv = inv * 10 + t % 10;
            t = t /10;
        }
        return inv;
    }
};

int main() {
    int n;
    cout << "Please enter an integer: ";
    cin >> n;
    while ((!cin.good()) || (n < 1) || (n > 1000000000))
    {
        cin.clear();
        cin.ignore(INT8_MAX, '\n');
        cout << "Wrong input! Please enter again: ";
        cin >> n;
    }

    Integer integer(n);
    cout << integer.inversed() << endl;
    return 0;
}


