//
// Created by 韩鸿渐 on 2019/4/18.
//

# include "client.h"

void Client::ChangeSeverName(char name) {
    Client::SeverName = name;    //静态数据成员的引用注意加上 "类名::" 来修饰
    Client::ClientNum ++;
}

int Client::getClientNum(){
    return Client::ClientNum;
};
