// copyright (c) 2021 all rights reserved
// created by : adrian student
// Date : 29 sept 2026
// This program asks the user for the radius of a
// circle and the calculates and displays its
// perimeter and area.
#include <cmath>
#include <iostream>

int main() {
    // declare  constants
    float Radius = 6;

    // declare variable
    float Circumference, Area;

    // calculate the circumference using pi
    Circumference = 2 * Radius * M_PI;
    Area = M_PI * pow(Radius, 2);

    // display area and circumference
    std::cout << "\n";
    std::cout << "Circumference = " << Circumference << "m" << std::endl;
    std::cout << "Area = " << Area << "m²" << std::endl;
}
