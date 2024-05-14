// main.cpp
#include "matrix.h"
#include <iostream>

int main() {
    Matrix a(3, 3);
    Matrix b(3, 3);
    a.fillRandom();
    b.fillRandom();

    std::cout << "Matrix A:\n" << a << std::endl;
    std::cout << "Matrix B:\n" << b << std::endl;

    Matrix c = a + b;
    std::cout << "Matrix A + B:\n" << c << std::endl;

    return 0;
}
