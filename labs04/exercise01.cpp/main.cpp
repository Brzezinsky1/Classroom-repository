#include <iostream>
#include "geometry.h"  

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = circleArea(radius);
    double circumference = circleCircumference(radius);

    std::cout << "Area: " << area << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;

    return 0;
}
