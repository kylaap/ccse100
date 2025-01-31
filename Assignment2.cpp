/*
Kyla Powell
CSE 100
Assignment 2
*/

/* Part 1

//Answers to questions 1-2 go here

1. The program will display a code that allows the user to enter the air temperature and display the velocity
at that temperature
2. The program will display the answers to a series of arithmetic problems

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double temperature, velocity;

    cout << "Enter the air temperature in Celsius: ";
    cin >> temperature;

    // Calculate the velocity of sound in air using the formula
    velocity = 331.3 + 0.606 * temperature;

    cout << "The velocity of sound at " << temperature << " degrees Celsius is " << velocity << " m/s." << endl;

    return 0;
}
*/ 
/*

#include <iostream>

using namespace std;

int main() {
    int result1 = 3 + 4 - 5;
    int result2 = 4 + 4 * 3 / 6;
    int result3 = 6 + 12 * 2 - 8;
    int result4 = 6 + 12 * (2 - 8);
    int result5 = ( 19 -3 ) * (2 + 2) / 4;

    cout << "The result of the expression 3 + 4 - 5 is: " << result1 << endl;
    cout << "The result of the expression 4 + 4 * 3 / 6 is: " << result2 << endl;
    cout << "The result of the expression 6 + 12 * 2 - 8 is: " << result3 << endl;
    cout << "The result of the expression 6 + 12 * (2 - 8) is: " << result4 << endl;
    cout << "The result of the expression ( 19 -3 ) * (2 + 2) / 4 is: " << result5 << endl;


    return 0;
}
// output:
// The result of the expression 3 + 4 - 5 is: 2
// The result of the expression 4 + 4 * 3 / 6 is: 6
// The result of the expression 6 + 12 * 2 - 8 is: 22
// The result of the expression 6 + 12 * (2 - 8) is: -54
// The result of the expression ( 19 -3 ) * (2 + 2) / 4 is: 16
*/

/* Part 2
//This program will play the game of Mad Lib 
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string instructorName, yourName, food, adjective, color, animal;
    int number;

    cout << "Enter the name of your instructor: ";
    getline(cin, instructorName);

    cout << "Enter your name: ";
    getline(cin, yourName);

    cout << "Enter a type of food: ";
    getline(cin, food);

    cout << "Enter a number between 100 and 120: ";
    cin >> number;
    cin.ignore(); // to ignore the newline character left in the buffer

    cout << "Enter an adjective: ";
    getline(cin, adjective);

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter an animal: ";
    getline(cin, animal);

    cout << "\nHere's your story:\n";
    cout << "Dear " << instructorName << ",\n";
    cout << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " << food << ",\n";
    cout << "which made me turn " << color << " and extremely ill. I came down with a fever of " << number << ".\n";
    cout << "Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework,\n";
    cout << "because he ate it. I am currently rewriting my homework and hope you will accept it late.\n";
    cout << "Sincerely,\n" << yourName << endl;

    return 0;
}
//output:
//Enter the name of your instructor: Soumya Indela
//Enter your name: Kyla
//Enter a type of food: wings
//Enter a number between 100 and 120: 116
//Enter an adjective: expensive
//Enter a color: pink
//Enter an animal: cat

//Here's your story:
//Dear Mr. Smith,
//I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten wings,
//which made me turn pink and extremely ill. I came down with a fever of 116.
//Next, my expensive pet cat must have smelled the remains of the wings on my homework,
//because he ate it. I am currently rewriting my homework and hope you will accept it late.
//Sincerely,
//Kyla