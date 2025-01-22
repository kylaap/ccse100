// How many small and large brownies can fit into a pan
// Name: Kyla Powell
// Date: 1/22/2025

#include <iostream>
using namespace std;
int main() {
    // Constants
    const double SMALL_BROWNIE = 1.5;
    const double LARGE_BROWNIE = 3.0;
    const double PAN_SIZE = 14.0;

    // Variables
    double smallBrownies, largeBrownies, totalBrownies;

    // Calculate the number of small and large brownies that can fit in the pan
    smallBrownies = PAN_SIZE / SMALL_BROWNIE;
    largeBrownies = PAN_SIZE / LARGE_BROWNIE;
    totalBrownies = smallBrownies + largeBrownies;

    // Display the results
    cout << "A pan that is " << PAN_SIZE << " inches can fit " << smallBrownies << " small brownies or " << largeBrownies << " large brownies." << endl;
    cout << "In total, the pan can fit " << totalBrownies << " brownies." << endl;

    return 0;
}
// Output:
// A pan that is 14 inches can fit 9.33333 small brownies or 4.66667 large brownies.
// In total, the pan can fit 14 brownies.

