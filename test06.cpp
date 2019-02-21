//
//  test06.cpp
//  c_project
//  单例模式练习
//  Created by ouyanghuan on 2019/1/24.
//  Copyright © 2019 ouyanghuan. All rights reserved.
//

#include <iostream>
using namespace std;

class Person
{
private:
    Person(){}
    Person(const Person&){}
    static Person * p;
    
public:
    static Person * getInstance()
    {
        return p;
    }
};

Person * Person::p = new Person;

int main06()
{
    Person* p1 = Person::getInstance();
    Person* p2 = Person::getInstance();
    if(p1 == p2)
    {
        cout<<"p1 == p2" <<endl;
    } else {
        cout<<"p1 != p2" <<endl;
    }
    return 0;
}
