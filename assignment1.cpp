/* 
Kyla Powell
CSE 100
homework 1
*/

/*
The problem solving process, as described in section 1.6 of the textbook, follows 11 simple steps. 
1. Define what the prgram is to do.
2. Visualize the program running on the computer
3. Use design tools to create a model of the program.
4. Check the model for logical errors. 
5. Write the program source code. 
6. Compile the source code
7. Correct any errors found during the compliation
8. Link the program to create an executable file
9. Run the program using test data for input
10. Correct any errors found while running the program. Repeat steps 4 through 10 as many times as necessary
11. Validate the results of the program
Step 1 requires you to simply identify the purpose of the program. Step 2 helps you visuals what you are doing. 
Step 3 is to help you format and create the program. Step 4 helps you find and eliminate errors. Step 5 is for writinng the source code. 
Step 6 has you compile the source code. meaning it will translate the code into machine language, as a compiler will do.
Step 7 is similar to step 4, you will find errors and eliminate them. Step 8 is used to create an exutable file. 
Step 9 and 10 are both steps that check for errors again. Step 11, the last step, is simply to solve the problem. */

/* 
// Names.cpp
//Prints a list of student names with their hometowns
//and intended major
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "\tKyla\t\tKnoxville\tChemistry\n"<<endl;
    cout << "\tBraden\t\tMiami\tComputer Science\n"<<endl;
    cout << "\tSally\t\tRoanoke\t\tBiology\n"<<endl;
    cout<<endl;
}
//The program is to print a list of student names with their hometowns and intended major.
//output:
//Kyla        Knoxville       Chemistry
//Braden      Miami           Computer Science
//Sally       Roanoke         Biology


/* 
//Ideal Weight Program 
//Program that is used to compute the ideal weight for both males and females
*/
#include <iostream>
using namespace std;

int main() {
    int heightInInches;
    char gender;

    cout << "Enter height in inches: 5 9 ";
    cin >> heightInInches; 
    cout << "Enter gender (M/F): M";
    cin >> gender;

    int idealWeight;
    if (gender == 'M' || gender == 'm') {
        idealWeight = 106 + 6 * (heightInInches - 60);
    } else if (gender == 'F' || gender == 'f') {
        idealWeight = 100 + 5 * (heightInInches - 60);
    } else {
        cout << "Invalid gender input." << endl;
        return 1;
    }

    cout << "The ideal weight is " << idealWeight << " pounds." << endl;
    return 0;
}
//output:
//Enter height in inches: 5 9
//Ideal weight is 160 popunds

#include <iostream>
using namespace std;

int main() {
    int heightInInches;
    char gender;

    cout << "Enter height in inches: 5 9 ";
    cin >> heightInInches; 
    cout << "Enter gender (M/F): F";
    cin >> gender;

    int idealWeight;
    if (gender == 'M' || gender == 'm') {
        idealWeight = 106 + 6 * (heightInInches - 60);
    } else if (gender == 'F' || gender == 'f') {
        idealWeight = 100 + 5 * (heightInInches - 60);
    } else {
        cout << "Invalid gender input." << endl;
        return 1;
    }

    cout << "The ideal weight is " << idealWeight << " pounds." << endl;
    return 0;
}
//output:
//Enter height in inches: 5 9
//Ideal weight is 135 pounds



    