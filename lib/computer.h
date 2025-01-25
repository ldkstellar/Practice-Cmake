#pragma once
#include <iostream>
#include "computer.h"
using namespace std;

class Computer
{
private:
    string name;
    int price;
    int id;
    /* data */
public:
    Computer(const string &name, const int &id, const int &price);
    ~Computer();
    void print();
};
