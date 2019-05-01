//
// Created by 韩鸿渐 on 2019/5/1.
//

#ifndef CPP_LEARN_EMPLOYEE_H
#define CPP_LEARN_EMPLOYEE_H

#include <iostream>
using namespace std;

class Empolyee
{
    char* name;
    char* address;
    char* city;
    char* code;

    public:
    Empolyee(char* n = "unknown", char* add = "unknown", char* ct = "unknown", char* c = "unknown"): name(n), address(add), city(ct), code(c){}

    void display()
    {
        cout << "Name: " << name <<endl;
        cout << "Address: " << address <<endl;
        cout << "City: " << city <<endl;
        cout << "Code: " << code <<endl;
    }

    void change_name(char* new_name)
    {
        name = new_name;
    }
};


#endif //CPP_LEARN_EMPLOYEE_H
