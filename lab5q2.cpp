

// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise
// Kyla Powell

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    float average; // holds the grade average
    cout << "Input your average:" << endl;
    cin >> average;

    // Check for invalid data
    if (average < 0 || average > 100) {
        cout << "Invalid data. Please enter a grade between 0 and 100." << endl;
    }
    // Check for 'A' category
    else if (average >= 90) {
        cout << "You got an A!" << endl;
    }
    // Check for 'B' category
    else if (average >= 80) {
        cout << "You got a B!" << endl;
    }
    // Check for 'You Pass' category
    else if (average >= 60) {
        cout << "You pass!" << endl;
    }
    // Check for 'You Fail' category
    else {
        cout << "You fail!" << endl;
    }

    return 0;
}
//Output:
//Input your average:80
//You got a B!
//Input your average:60
//You pass!
//Input your average:55
//You fail!

// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise
// Kyla Powell