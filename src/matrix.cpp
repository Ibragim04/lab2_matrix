// matrix.cpp
#include "matrix.h"
#include <cstdlib>

Matrix::Matrix(unsigned int rows, unsigned int cols) : m(rows), n(cols) {
    data = new int*[m];
    for (unsigned int i = 0; i < m; ++i) {
        data[i] = new int[n];
    }
}

Matrix::~Matrix() {
    for (unsigned int i = 0; i < m; ++i) {
        delete[] data[i];
    }
    delete[] data;
}

int& Matrix::operator()(unsigned int row, unsigned int col) {
    return data[row][col];
}

Matrix& Matrix::operator+=(const Matrix& other) {
    // реализация оператора +=
}

Matrix Matrix::operator+(const Matrix& other) const {
    // реализация оператора +
}

Matrix& Matrix::operator-=(const Matrix& other) {
    // реализация оператора -=
}

Matrix Matrix::operator-(const Matrix& other) const {
    // реализация оператора -
}

Matrix Matrix::operator*(const Matrix& other) const {
    // реализация оператора *
}

bool Matrix::operator==(const Matrix& other) const {
    // реализация оператора ==
}

bool Matrix::operator!=(const Matrix& other) const {
    // реализация оператора !=
}

void Matrix::fillRandom() {
    for (unsigned int i = 0; i < m; ++i) {
        for (unsigned int j = 0; j < n; ++j) {
            data[i][j] = rand() % 10;
        }
    }
}

std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
    for (unsigned int i = 0; i < matrix.m; ++i) {
        for (unsigned int j = 0; j < matrix.n; ++j) {
            os << matrix.data[i][j] << ' ';
        }
        os << '\n';
    }
    return os;
}
