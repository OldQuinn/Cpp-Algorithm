//
// Created by 韩鸿渐 on 2019/4/18.
//

#ifndef CLIENT_H
#define CLIENT_H

class Client {
    static char SeverName;
    static int ClientNum;

public:
    static void ChangeSeverName(char name);
    static int getClientNum();
};


#endif //CLIENT_H
