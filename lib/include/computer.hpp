#pragma once // 인클루드 중복 방지

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
