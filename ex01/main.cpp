#include <iostream>
#include "iter.hpp"

void print_int(int &i) {
    std::cout << i << " ";
}

void increment_int(int &i) {
    i++;
}

void print_string(std::string &s) {
    std::cout << s << " ";
}

int main() {
    int int_array[] = {1, 2, 3, 4, 5};
    std::string str_array[] = {"VIVA", "KHAWA", "1337"};

    std::cout << "Original int_array: ";
    iter(int_array, 5, print_int);
    std::cout << std::endl;

    std::cout << "Incremented int_array: ";
    iter(int_array, 5, increment_int);
    iter(int_array, 5, print_int);
    std::cout << std::endl;

    std::cout << "Original str_array: ";
    iter(str_array, 3, print_string);
    std::cout << std::endl;

    return 0;
}

