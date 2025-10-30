#include <iostream>

int main(){  

    std::cout << "Please type amount of your revenue: ";
    int revenue;
    std::cin >> revenue; 

    std::cout << "Please type amount of your costs: ";
    int costs;
    std::cin >> costs; 

    std::cout << "Please type the tax rate: ";
    double tax_rate;
    std::cin >> tax_rate;

    const int gross_profits = revenue - costs; 
    std::cout << "gross profits: " << gross_profits << '\n'; 

    if (gross_profits > 0) {
        int net_profit = gross_profits - (tax_rate * gross_profits);
        std::cout << "Your net profit is " << net_profit;
    } else {
        std::cout << "Because of the negative net profit, no tax is payable";
    }

    return 0;
}