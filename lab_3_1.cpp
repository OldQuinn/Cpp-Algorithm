//
// Created by 韩鸿渐 on 2019/3/24.
//

//题目描述
//
//        输入一个三角形的3边长度，判断该三角形是否为直角三角形，若是则输出True，若不是则输出False。推荐做法：定义一个函数，
//        接受三个int参数，返回bool，再用主函数调用之。
//
//
//输入描述
//        每行输入三个由空格隔开的整数 a, b, c ，表示三角形的 3 条边长。1 <= a,b ,c <= 10000


# include <iostream>
using namespace std;

bool isTriangle(float a, float b, float c)
{
    if (a >= b + c)
        return false;
    else if (b >= a + c)
        return false;
    else if (c >= a + b)
        return false;
    else
        return true;
}



int main()
{
    int n, a, b, c;
    for(int i = 1; i <=3; i ++)
    {
        cout << "请输入第" << i << "个数字：";
        cin >> n;
        while ((!cin.good()) || (n < 1) || (n > 10000))
        {
            cin.clear();
            cin.ignore(INT8_MAX, '\n');
            cout << "输入错误！请再次输入输入：";
            cin >> n;
        }

        if (i == 1)
            a = n;
        else if (i == 2)
            b = n;
        else
            c = n;
    }


    if(isTriangle(a, b ,c))
        cout << "True";
    else
        cout << "False";
    return 0;
}

