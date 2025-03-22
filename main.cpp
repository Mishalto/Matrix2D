#include <iostream>
#include <cassert>

#include "Matrix2D.hpp"

int main() {
    Matrix2D<int> arr(3, 5);
    int num = 0;
    for (int i = 0; i < arr.rows(); ++i) {
        for (int j = 0; j < arr.cols(); ++j) {
            arr.at(i, j) = num;
            num += 1;
        }
    }

    for (int i = 0; i < arr.rows(); ++i) {
        for (int j = 0; j < arr.cols(); ++j) {
            std::cout << arr.at(i, j) << " ";
        }
        std::cout << '\n';
    }

    std::cout << arr.at(2, 3) << '\n';
    std::cout << arr[2][3] << '\n';
    return 0;
}