#include <iostream>

int main() {
    int n = 5; // Number of rows
    
    // Print pyramid pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 0; j < n - i; j++) {
            std::cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    return 0;
}