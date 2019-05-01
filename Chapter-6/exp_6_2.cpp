//
// Created by 韩鸿渐 on 2019/5/1.
//


#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
    cout<< "************ Original information ************" << endl;
    Empolyee person("Quinn", "Pudong", "Shanghai", "200120");
    person.display();
    person.change_name("Han");
    cout << endl;
    cout<< "************ Updated information ************" << endl;
    person.display();
    return 0;
}