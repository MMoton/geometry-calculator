/*
Code File Name: Chapter4Exercise3.cpp
Programmer: Maya Moton
Due Date: 04/12/26
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;
//asking the user for which shape they would like or for it to end
    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter the radius: ";
        cin >> radius;
//checking to see if the number entered is negative  or not
        if (radius < 0)
            cout << "Error: Radius cannot be negative.\n";
        else
            cout << "Area = " << PI * radius * radius << endl;
    }
    else if (choice == 2) {
        double length, width;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;

        if (length < 0 || width < 0)
            cout << "Error: Values cannot be negative.\n";
        else
            cout << "Area = " << length * width << endl;
    }
    else if (choice == 3) {
        double base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;

        if (base < 0 || height < 0)
            cout << "Error: Values cannot be negative.\n";
        else
            cout << "Area = " << base * height * 0.5 << endl;
    }//quit option
    else if (choice == 4) {
        cout << "Program ended.\n";
    }
    else {
        cout << "Error: Invalid choice.\n";
    }
    return 0;
}
