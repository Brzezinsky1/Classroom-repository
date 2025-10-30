#include <iostream>

const unsigned short ADD_SUBTRACT = 32;
const float RATIO = 5.0 / 9.0;

void getInput(float &temperatureIn, char &tempTypeIn);
float convertTemperature(float temperatureIn, char tempTypeIn, char &tempTypeOut);
void displayResult(float temperatureIn, char tempTypeIn, float temperatureOut, char tempTypeOut);

int main() {
    float temperatureIn, temperatureOut;
    char tempTypeIn, tempTypeOut;

    getInput(temperatureIn, tempTypeIn);
    temperatureOut = convertTemperature(temperatureIn, tempTypeIn, tempTypeOut);
    displayResult(temperatureIn, tempTypeIn, temperatureOut, tempTypeOut);

    std::cout << "Press Enter or Return to continue.\n";
    std::cin.get();

    return 0;
}

void getInput(float &temperatureIn, char &tempTypeIn) {
    std::cout << "Enter a temperature and indicate if it is in degrees Fahrenheit or Celsius [##.# C/F]: ";
    std::cin >> temperatureIn >> tempTypeIn;
    std::cin.ignore(100, '\n');
    std::cout << "\n";
}

float convertTemperature(float temperatureIn, char tempTypeIn, char &tempTypeOut) {
    float temperatureOut;

    switch (tempTypeIn) {
        case 'C':
        case 'c':
            temperatureOut = (temperatureIn / RATIO) + ADD_SUBTRACT;
            tempTypeOut = 'F';
            tempTypeIn = 'C';
            break;

        case 'F':
        case 'f':
            temperatureOut = (temperatureIn - ADD_SUBTRACT) * RATIO;
            tempTypeOut = 'C';
            tempTypeIn = 'F';
            break;

        default:
            tempTypeOut = 'E'; 
            temperatureOut = 0.0;
            break;
    }

    return temperatureOut;
}

void displayResult(float temperatureIn, char tempTypeIn, float temperatureOut, char tempTypeOut) {
    if (tempTypeOut != 'E') {
        std::cout << temperatureIn << " degrees "
                  << tempTypeIn << " is equal to "
                  << temperatureOut << " degrees "
                  << tempTypeOut << ".\n\n";
    } else {
        std::cout << "The calculation could not be made due to invalid input.\n\n";
    }
}
