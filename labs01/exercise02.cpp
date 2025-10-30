#include <iostream>

int main(){

    int x, y;

    std::cout << "Please enter the first number ";
    std::cin >> x;

    while (true) {
        std::cout << "Please enter the second number ";
        std::cin >> y;
        if (y != 0) {
            break;
        }
        std::cout << "The second number can't be 0. Please try again.\n";
    }

    int sum = x + y;
    int difference = x - y;
    int product = x * y;
    double quotient = static_cast<double>(x) / y;
    int remainder = x % y;

    std::cout << "Sum: " << sum << '\n';
    std::cout << "Difference: " << difference << '\n';
    std::cout << "Product: " << product << '\n';
    std::cout << "Quotient: " << quotient << '\n';
    std::cout << "Remainder: " << remainder << '\n';

    return 0;
}


