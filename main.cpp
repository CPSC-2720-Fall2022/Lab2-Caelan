#include <iostream>


int addTwo (int x , int y) {
    return x + y;
}

int subtractTwoNumbers(int x, int y) {
    return x + y;
}

int divideTwoNumbers(int x, int y) {
    if (y == 0){
        std::cout << "Can't Divide by Zero" << std::endl;
        return 0;
    }
    return x/y;
}
int multiplyTwo(int x, int y) {
    return x * y;
}

int main() {
    int x;
    int y;
    std::cout << "Enter two numbers seperated by spaces: ";
    std::cin >> x;
    std::cin >> x;

    std::cout << "Sum: " << addTwo(x,y) << std::endl
    << "Difference: " << subtractTwoNumbers(x, y) << std::endl
    << "Product: " << multiplyTwo(x, y) << std::endl
    << "Quotient " << divideTwoNumbers(x, y);
    return 0;
}
