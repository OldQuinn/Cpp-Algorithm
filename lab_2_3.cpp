//
// Created by 韩鸿渐 on 2019/3/7.
//


//题目描述
//        打印 n 阶实心菱形
//
//输入描述
//        输入一个整数n，0 < n <= 10
//
//输出描述
//        输出 n 阶实心菱形 ， 占 2*n-1 行
//
//样例输入
//          3
//样例输出
//          *
//         ***
//        *****
//         ***
//          *

# include <iostream>
# include <math.h>


using namespace std;

int main() {
    int n, star, space, total;
    cout << "请输入一个大于0小于等于10的数字：";
    cin >> n;
    while ((!cin.good()) || !(n > 0) || !(n <= 10)) {
        cin.clear();
        cin.ignore(INT8_MAX, '\n');
        cout << "输入错误！请再次输入输入：";
        cin >> n;
    }
    total = 2 * n - 1;
    for(int i = 1; i <= total; i ++)
    {
        if(i <= n)
        {
            star= 2 * i - 1;
            space = max((total - star)/2, 0);
        }
        else
            {
                star = 2 * (total - i + 1) - 1;
                space = max((total - star)/2, 0);
             }
        for(int j = 1; j <= total; j ++)
        {

            if (j <= space)
            {
                cout << " ";
            }
            else if ((j > space) && (j <= space + star))
            {
                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }


    return 0;
}





