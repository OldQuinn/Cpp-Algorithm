//
// Created by 韩鸿渐 on 2019/2/27.
//

# include <iostream>

using namespace std;

// practice 1: 用 do-while 语句实现输出1到10的累加和
//int main()
//{
//    int i = 1, sum = 0;
//    do {
//        sum = sum + i;
//        i = i + 1;
//    } while (i <= 10);
//    cout << "Sum is " << sum << endl;
//    return 0;
//}

// practice 2: 用 for 语句实现输出1到10的累加和
//int main()
//{
//    int sum = 0;
//    for (int i = 1; i <= 10; i++)
//    {
//        sum = sum + i;
//    }
//    cout << "Sum is " << sum << endl;
//    return 0;
//}

// practice 3: 选择图形种类，计算面积
//const float PI = 3.1415926;
//int main()
//{
//    int Type;
//    float a, b, area;
//    cout << "请输入类型: 1-圆形, 2-正方形, 3-长方形" << endl;
//    cin >> Type;
//    switch (Type)
//    {
//        case 1:
//            cout << "请输入圆的半径" << endl;
//            cin >> a;
//            cout << "圆的面积是"<< PI * a * a << endl;
//            break;
//
//        case 2:
//            cout << "请输入正方形的边长" << endl;
//            cin >> a;
//            cout << "正方形的面积是"<<  a * a << endl;
//            break;
//
//        case 3:
//            cout << "请输入长方形的长" << endl;
//            cin >> a;
//            cout << "请输入长方形的宽" << endl;
//            cin >> b;
//            cout << "正方形的面积是"<<  a * b << endl;
//            break;
//
//        default:
//            cout << "输入不合法！" << endl;
//    }
//    return 0;
//}
//

// practice 4: 自定义一个时间类型

int main()
{
    struct mytime
    {
        unsigned int year;
        unsigned int month;
        unsigned int day;
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
    };

    mytime atime = {1900, 1, 1, 0, 0, 0};   // 初始化
    cout << "请输入年份：" << endl;
    cin >> atime.year;
    cout << "请输入月份：" << endl;
    cin >> atime.month;
    cout << "请输入天数：" << endl;
    cin >> atime.day;
    cout << "请输入小时：" << endl;
    cin >> atime.hour;
    cout << "请输入分钟：" << endl;
    cin >> atime.minute;
    cout << "请输入秒钟：" << endl;
    cin >> atime.second;

    cout << "The time is: " << atime.year << "/" << atime.month << "/" << atime.day<< "/" << atime.hour<< ":" << atime.minute<< ":" << atime.second << endl;


    return 0;
}
