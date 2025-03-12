#include <iostream>
#include "iter.hpp"

// void printInt(int &i) {
//     std::cout << i << " ";
// }

// void incrementInt(int &i) {
//     i++;
// }

// void printString(std::string &s) {
//     std::cout << s << " ";
// }

// int main() {
//     int intArray[] = {1, 2, 3, 4, 5};
//     std::string strArray[] = {"Hello", "World", "42"};

//     std::cout << "Original intArray: ";
//     iter(intArray, 5, printInt);
//     std::cout << std::endl;

//     std::cout << "Incremented intArray: ";
//     iter(intArray, 5, incrementInt);
//     iter(intArray, 5, printInt);
//     std::cout << std::endl;

//     std::cout << "Original strArray: ";
//     iter(strArray, 3, printString);
//     std::cout << std::endl;

//     return 0;
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
