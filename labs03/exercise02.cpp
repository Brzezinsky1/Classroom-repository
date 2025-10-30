#include <iostream>

const float MPH_TO_KPH = 1.60934f;

void getInput(float &speedIn, char &unitIn);
float convertSpeed(float speedIn, char unitIn, char &unitOut);
void displayResult(float speedIn, char unitIn, float speedOut, char unitOut);

int main() {
    float speedIn, speedOut;
    char unitIn, unitOut;

    getInput(speedIn, unitIn);
    speedOut = convertSpeed(speedIn, unitIn, unitOut);
    displayResult(speedIn, unitIn, speedOut, unitOut);

    std::cout << "Press Enter or Return to continue.\n";
    std::cin.get();

    return 0;
}

void getInput(float &speedIn, char &unitIn) {
    std::cout << "Enter speed and indicate if it is in mph or kph [##.# M/K]: ";
    std::cin >> speedIn >> unitIn;
    std::cin.ignore(100, '\n');
    std::cout << "\n";
}

float convertSpeed(float speedIn, char unitIn, char &unitOut) {
    float speedOut;

    switch (unitIn) {
        case 'M':
        case 'm': 
            speedOut = speedIn * MPH_TO_KPH;
            unitOut = 'K';
            break;

        case 'K':
        case 'k': 
            speedOut = speedIn / MPH_TO_KPH;
            unitOut = 'M';
            break;

        default:
            unitOut = 'E';
            speedOut = 0.0f;
            break;
    }

    return speedOut;
}

void displayResult(float speedIn, char unitIn, float speedOut, char unitOut) {
    if (unitOut != 'E') {
        std::cout << speedIn << " " << unitIn << " is equal to "
                  << speedOut << " " << unitOut << ".\n\n";
    } else {
        std::cout << "The calculation could not be made due to invalid input.\n\n";
    }
}
