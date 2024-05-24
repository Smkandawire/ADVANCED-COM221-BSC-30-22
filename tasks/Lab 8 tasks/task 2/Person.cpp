#pragma once
#include "Person.h"

int main() {
    Person Jane("Jane", 60.0f, 30);
    Person John("John", 75.0f, 30);

    if (Jane == John) {
        std::cout << "This is the same person" << std::endl;
    } else {
        std::cout << "This is NOT the same person" << std::endl;
    }

    if (Jane < John) {
        std::cout << "Jane is younger than John" << std::endl;
    } else if (John > Jane) {
        std::cout << "John is older than Jane" << std::endl;
    } else {
        std::cout << "Jane and John are the same age" << std::endl;
    }

    return 0;
}