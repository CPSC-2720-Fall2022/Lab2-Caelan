#include <iostream>
#include "operations.h"
int addTwo (int x , int y) {
    return x + y;
}

int subtractTwo(int x, int y) {
    return x - y;
}

int divideTwo(int x, int y) {
    if (y == 0){
        std::cout << "Can't Divide by Zero" << std::endl;
        return 0;
    }
    return x/y;
}

int multiplyTwo(int x, int y) {
    return x * y;
}

