#include <iostream>
#include "iter.hpp"

void printInt(int &i) {
    std::cout << i << " ";
}

void incrementInt(int &i) {
    i++;
}

void printString(std::string &s) {
    std::cout << s << " ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"Hello", "World", "42"};

    std::cout << "Original intArray: ";
    iter(intArray, 5, printInt);
    std::cout << std::endl;

    std::cout << "Incremented intArray: ";
    iter(intArray, 5, incrementInt);
    iter(intArray, 5, printInt);
    std::cout << std::endl;

    std::cout << "Original strArray: ";
    iter(strArray, 3, printString);
    std::cout << std::endl;

    return 0;
}

