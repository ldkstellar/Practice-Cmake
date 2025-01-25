#include <iostream>
#include "computer.h"

Computer::Computer(const string &name, const int &id, const int &price)
{
    this->name = name;
    this->id = id;
    this->price = price;

    cout << this->name + "컴퓨터가 생성이 되었습니다." << endl;
}

Computer::~Computer()
{
    cout << this->name + "컴퓨터가 소멸되었습니다." << endl;
}

void Computer::print()
{
    cout << "제품명: " << name << "id:" << id << "가격:" << price << endl;
}