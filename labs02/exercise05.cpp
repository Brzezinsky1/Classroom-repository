#include <iostream>

int main() {
    int dayNumber;

    std::cout << "Enter the number of the current day (1-7): ";
    std::cin >> dayNumber;

    switch (dayNumber) {
        case 1:
            std::cout << "Monday\n";
            break;
        case 2:
            std::cout << "Tuesday\n";
            break;
        case 3:
            std::cout << "Wednesday\n";
            break;
        case 4:
            std::cout << "Thursday\n";
            break;
        case 5:
            std::cout << "Friday\n";
            break;
        case 6:
            std::cout << "Saturday\n";
            break;
        case 7:
            std::cout << "Sunday\n";
            break;
        default:
            std::cout << "Invalid number! Please enter a value between 1 and 7.\n";
            break;
    }

    return 0;
}
