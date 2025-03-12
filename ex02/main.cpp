#include "Array.hpp"

int main() {
    try {

        Array<int const> arr1(7);
        Array<int> arr;
        Array<int> arr2(6);

        for (unsigned int i = 0; i < arr2.size(); ++i) {
            arr2[i] = i * 2;
        }

        Array<int> arr3 = arr2;

        arr2[2] = 100;

        std::cout << "arr1: ";
        for (unsigned int i = 0; i < arr1.size(); ++i) {
            std::cout << arr1[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "arr2: ";
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            std::cout << arr2[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "arr3: ";
        for (unsigned int i = 0; i < arr3.size(); ++i) {
            std::cout << arr3[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Size of arr2: " << arr2.size() << std::endl;

        std::cout << arr2[10] << std::endl;

    } catch (const std::exception& e) {

        std::cout << e.what() << std::endl;
    }

    return 0;
}
