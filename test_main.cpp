#include <iostream>
#include <string>
#include "message_lib.h"

int main() {
    std::string expected = "Digitalis Kiallitas Demo";
    std::string actual = get_message();

    if (actual == expected) {
        std::cout << "Test Passed: Strings match!" << std::endl;
        return 0; // Success
    } else {
        std::cerr << "Test Failed: Expected '" << expected 
                  << "' but got '" << actual << "'" << std::endl;
        return 1; // Failure
    }
}