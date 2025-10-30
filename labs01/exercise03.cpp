#include <iostream>

int main() {

    std::cout << "char: " << sizeof(char) << " bytes\n";
    std::cout << "unsigned char: " << sizeof(unsigned char) << " bytes\n";
    std::cout << "short: " << sizeof(short) << " bytes\n";
    std::cout << "unsigned short: " << sizeof(unsigned short) << " bytes\n";
    std::cout << "int: " << sizeof(int) << " bytes\n";
    std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes\n";
    std::cout << "long: " << sizeof(long) << " bytes\n";
    std::cout << "unsigned long: " << sizeof(unsigned long) << " bytes\n";
    std::cout << "long long: " << sizeof(long long) << " bytes\n";
    std::cout << "unsigned long long: " << sizeof(unsigned long long) << " bytes\n";
    std::cout << "float: " << sizeof(float) << " bytes\n";
    std::cout << "double: " << sizeof(double) << " bytes\n";
    std::cout << "long double: " << sizeof(long double) << " bytes\n";
    std::cout << "bool: " << sizeof(bool) << " bytes\n";

    return 0;
}
