#include <iostream>
#include <cstdlib>   
#include <ctime>       

int main() {
    int throws;
    std::cout << "How many times do you want to throw the dice? ";
    std::cin >> throws;

    std::srand(static_cast<unsigned>(std::time(nullptr))); 

    int sum = 0;

    for (int i = 0; i < throws; i++) {
        int result = std::rand() % 6 + 1;  
        sum += result;
        std::cout << "Throw " << i + 1 << ": " << result << "\n";
    }

    double average = static_cast<double>(sum) / throws;

    std::cout << std::fixed;
    std::cout << "\nAverage result: " << average << "\n";

    return 0;
}
