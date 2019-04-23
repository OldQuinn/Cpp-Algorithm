//
// Created by 韩鸿渐 on 2019/4/18.
//

/*
声明字符型静态数据成员 SeverName，保存服务器名称
声明静态数据成员 ClientNum，记录已经定义的客户数量
定义静态函数 ChangeSeverName() 改变服务器名称

在头文件 client.h中声明类
在文件 client.cpp实现
在exp_5_1中测试这个类

*/

# include <iostream>
# include "client.h"
using namespace std;

int Client::ClientNum = 0;
char Client::SeverName = 'a';

int main()
{
    Client c1;
    c1.ChangeSeverName('a');
    cout << "Current client number: " << c1.getClientNum() << endl;
    Client c2;
    c1.ChangeSeverName('b');
    cout << "Current client number: " << c2.getClientNum() << endl;
    return 0;
}




