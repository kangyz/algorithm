#include <iostream>
#include "src/algorithm.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    double a = 10;
    double b = 13;

    ParamIn paramIn;
    memset(&paramIn,0x00, sizeof(ParamIn));
    paramIn.a = a;
    paramIn.b = b;

    ParamOut out;
    memset(&out,0x00, sizeof(ParamOut));
    divide(&paramIn,&out);

    return 0;
}