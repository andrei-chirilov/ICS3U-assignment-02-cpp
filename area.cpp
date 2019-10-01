// copyright(c) 2019 Andrei All rights reserved.
//
// created by: Andrei Chirilov
// created on: October 2019
// This program calculates the perimeter of a square where user puts in values

#include <iostream>
#include <cmath>

int main() {
    int sidelength;
    int perimeter;
    std::cout << "We will calculate the perimeter of a square. " << std::endl;
    std::cout << "Enter the sidelength (mm): ";
    std::cin >> sidelength;
    perimeter = sidelength * 4;
    std::cout << "Perimeter is " << (perimeter) << "mm" << std::endl;
}
