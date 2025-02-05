/* Lab 9
// CSE 100
// Kyla Powell
*/

/* sample run 1*/
#include <iostream>
#include <cmath>

int main() {
    const double g = 9.8; // acceleration due to gravity in meters/second^2
    double t, h;

    std::cout << "Enter the number of seconds the watermelon falls: ";
    std::cin >> t;
    std::cout << "Enter the height of the bridge above the water (in meters): ";
    std::cin >> h;

    for (int i = 0; i <= t; ++i) {
        double d = 0.5 * g * std::pow(i, 2);
        if (d > h) {
            std::cout << "At t = " << i << " seconds, the distance fallen (" << d << " meters) is not valid as it exceeds the height of the bridge.\n";
            break;
        } else {
            std::cout << "At t = " << i << " seconds, the distance fallen is " << d << " meters.\n";
        }
    }

    return 0;
}

//output
// Enter the number of seconds the watermelon falls: 2
// Enter the height of the bridge above the water (in meters): 100
// At t = 0 seconds, the distance fallen is 0 meters.
// At t = 1 seconds, the distance fallen is 4.9 meters.
// At t = 2 seconds, the distance fallen is 19.6 meters.

