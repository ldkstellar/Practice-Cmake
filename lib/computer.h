#pragma once
#include <iostream>
#include "computer.h"
using namespace std;

class Computer
{
public:
    Computer();
    Computer(const string &name, const int &id, const int &price);
    ~Computer();
    void print();

private:
    string name;
    int id;
    int price;
    /* data */
};
