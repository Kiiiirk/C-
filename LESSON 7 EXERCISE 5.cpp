#include <iostream>

int main() {
    int n, i, factorial = 1;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: Invalid input! Please enter a positive integer." << std::endl;
        return 0;
    }

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;
    return 0;
}