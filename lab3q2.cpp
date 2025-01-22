#include <iostream>

using namespace std;

int main() {
    // Function to convert Fahrenheit to Celsius
    auto fahrenheitToCelsius = [](double fahrenheit) {
        return (5.0 / 9.0) * (fahrenheit - 32);
    };

    // Test temperatures
    double temperatures[] = {32, 72, 100};

    // Display the Fahrenheit and corresponding Celsius temperatures
    for (double fahrenheit : temperatures) {
        double celsius = fahrenheitToCelsius(fahrenheit);
        cout << "Fahrenheit: " << fahrenheit << " -> Celsius: " << celsius << endl;
    }

    return 0;
}
//Output:
// Fahrenheit: 32 -> Celsius: 0
// Fahrenheit: 72 -> Celsius: 22.2222
// Fahrenheit: 100 -> Celsius: 37.7778