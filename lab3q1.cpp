#include <iostream>

int main() {
    double pounds, kilograms;

    std::cout << "Enter your weight in pounds: ";
    std::cin >> pounds;

    kilograms = pounds / 2.2;

    std::cout << "Your weight in kilograms is: " << kilograms << std::endl;

    return 0;
}
// Output:
// Enter your weight in pounds: 160
// Your weight in kilograms is: 72.7273