#include "counter.h"

int nextID() {
    static int current = 0;  
    current = current + 1;    
    return current;
}
