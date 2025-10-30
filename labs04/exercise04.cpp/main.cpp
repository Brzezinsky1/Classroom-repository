#include <iostream>
#include "counter.h"

int main() {
    std::cout << "First call:  " << nextID() << "\n";
    std::cout << "Second call: " << nextID() << "\n";
    std::cout << "Third call:  " << nextID() << "\n";

    
    std::cout << "\nLoop calls:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "nextID() -> " << nextID() << "\n";
    }

    return 0;
}
