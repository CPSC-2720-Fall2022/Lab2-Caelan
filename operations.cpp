#include <iostream>
#include "operations.h"

int square (int x) {
    return x * x;
}

int subtractTwo(int x, int y) {
    return x - y;
}

int divideTwo(int x, int y) {
    if (y == 0){
        std::cout << "DIVERR: Can't Divide by Zero" << std::endl;
        return 0;
    }
    return x/y;
}

int multiplyTwo(int x, int y) {
    return x * y;
}

