#pragma once

#include <iostream>
#include <string>

template <typename T> 
class Array {
    private:
        T               *units;
        unsigned int    size_array;

    public:
    /*----------------------- Orthodox Canonical Form -----------------------*/
        Array(): units(NULL), size_array(0){
            std::cout << "default constractor\n";
        }

        Array(unsigned int n): size_array(n){

            std::cout << "param constractor\n";
            units = new T[n]();
        }

        Array(const Array& other) : size_array(other.size_array) {

            std::cout << "coppy constractor\n";
            units = new T[size_array];
            for (unsigned int i = 0; i < size_array; ++i) {
                units[i] = other.units[i];
            }
        }

        Array& operator=(const Array& other) {

            if (this != &other) {
                delete[] units;
                size_array = other.size_array;
                units = new T[size_array];
                for (unsigned int i = 0; i < size_array; ++i) {
                    units[i] = other.units[i];
                }
            }
            return *this;
        }

        ~Array() {
            std::cout << "destractor\n";
            delete[] units;
        }

        T & operator[](unsigned int index) {

            if (index >= size_array) {
                throw std::out_of_range("Index is want to access non-allocated memory !!");
            }
            return units[index];
        }

        unsigned int size() const {

            return size_array;
        }
};