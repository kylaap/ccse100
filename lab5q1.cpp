/* This program tests whether or no an initialized value
/ is equal to a value input by the user
// Kyla Powell
// CSE 100
// January 30th, 2025
*/


#include <iostream>
using namespace std;
int main( )
{
int num1;
int num2 = 5; // num2 is initialized to 5 
cout << "please enter an integer: ";
cin >> num1;

cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
if (num1 == num2)
{
cout << "The numbers are the same." << endl;
cout << "Hey, that's a coincidence!" << endl;
}
else  {
    cout << "The numbers are not the same." << endl;
}
return 0;
}
//output:
//please enter an integer: 5
//num1 = 5 and num2 = 5
//The numbers are the same.
//Hey, that's a coincidence!
//please enter an integer: 6
//num1 = 6 and num2 = 5
//The numbers are not the same.






