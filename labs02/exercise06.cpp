#include <iostream>
#include <string>

int main() {
    unsigned short month;
    unsigned short day;

    std::cout << "Enter the month (1-12) of your birthday: ";
    std::cin >> month;
    std::cout << "Enter the day (1-31) of your birthday: ";
    std::cin >> day;

    std::string sign; 

    if (month == 1) { 
        if (day <= 19)
            sign = "Capricorn";
        else
            sign = "Aquarius";
    }
    else if (month == 2) {
        if (day <= 18)
            sign = "Aquarius";
        else
            sign = "Pisces";
    }
    else if (month == 3) {
        if (day <= 19)
            sign = "Pisces";
        else
            sign = "Aries";
    }
    else if (month == 4) {
        if (day <= 19)
            sign = "Aries";
        else
            sign = "Taurus";
    }
    else if (month == 5) {
        if (day <= 20)
            sign = "Taurus";
        else
            sign = "Gemini";
    }
    else if (month == 6) {
        if (day <= 21)
            sign = "Gemini";
        else
            sign = "Cancer";
    }
    else if (month == 7) {
        if (day <= 22)
            sign = "Cancer";
        else
            sign = "Leo";
    }
    else if (month == 8) {
        if (day <= 22)
            sign = "Leo";
        else
            sign = "Virgo";
    }
    else if (month == 9) {
        if (day <= 22)
            sign = "Virgo";
        else
            sign = "Libra";
    }
    else if (month == 10) {
        if (day <= 22)
            sign = "Libra";
        else
            sign = "Scorpio";
    }
    else if (month == 11) {
        if (day <= 21)
            sign = "Scorpio";
        else
            sign = "Sagittarius";
    }
    else if (month == 12) {
        if (day <= 21)
            sign = "Sagittarius";
        else
            sign = "Capricorn";
    }
    else {
        sign = "Unknown";
    }

    std::cout << "If your birthday is " << month << "/" << day
              << ", then your sign is: " << sign << ".\n\n";

    std::cout << "Press Enter or Return to continue.\n";
    std::cin.get();

    return 0;
}
