#include <iostream>
#include "math_functions.h"
void printmessage(const std::string& message);
void u2();
int main() {
    int x,y;
    std::cin >> x >> y;
    std::cout << "sum == " << add(x,y) << std::endl;
    printmessage("hi");
    u2();
    return 0;
}

