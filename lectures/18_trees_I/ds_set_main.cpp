#include <iostream>
#include "ds_set_starter.h"

int main() {
    // create a set of integers
    ds_set<int> numbers;

    // insert some values into the set
    numbers.insert(10);
    numbers.insert(5);
    numbers.insert(20);
    numbers.insert(15);
    numbers.insert(5); // duplicate value (won't be inserted)

    // check if a specific value exists in the set
    int value = 15;
    if (numbers.find(value) == true) {
        std::cout << value << " is found in the set." << std::endl;
    } else {
        std::cout << value << " is not found in the set." << std::endl;
    }

    return 0;
}
