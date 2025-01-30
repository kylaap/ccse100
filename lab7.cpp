//*
//Kyla Powell
//CSE 100
//January 30th, 2024 */


#include <iostream>
#include <cmath>

using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Calculate area of a circle" << endl;
    cout << "2. Calculate area of a rectangle" << endl;
    cout << "3. Calculate area of a triangle" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    double radius, length, width, base, height;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius of the circle: ";
                cin >> radius;
                cout << "Area of the circle: " << calculateCircleArea(radius) << endl;
                break;
            case 2:
                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            case 3:
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

//output:
//Menu:
//1. Calculate area of a circle
//2. Calculate area of a rectangle
//3. Calculate area of a triangle
//4. Exit
//Enter your choice: 1
//Enter radius of the circle: 10
//Area of the circle: 314.159
//Menu:
//1. Calculate area of a circle
//2. Calculate area of a rectangle
//3. Calculate area of a triangle
//4. Exit
//Enter your choice: 2
//Enter length and width of the rectangle: 7 14
//Area of the rectangle: 98
//Menu:
//1. Calculate area of a circle
//2. Calculate area of a rectangle
//3. Calculate area of a triangle
//4. Exit
//Enter your choice: 3
//Enter base and height of the triangle: 3 6
//Area of the triangle: 9
//Menu:
//1. Calculate area of a circle
//2. Calculate area of a rectangle
//3. Calculate area of a triangle
//4. Exit
//Enter your choice: 4
//Exiting...
//Menu:
//1. Calculate area of a circle
//2. Calculate area of a rectangle
//3. Calculate area of a triangle
//4. Exit
//Enter your choice: 7 
//Invalid choice. Please try again.