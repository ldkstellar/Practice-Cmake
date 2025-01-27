#include <iostream>
#include "computer.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Computer myComputer("리눅스", 1, 32000);
    myComputer.print();

    Computer samsung;
    samsung.print();

    /* code */
    return 0;
}
