#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // 4# hire a driver
    short int driver_age;
    bool has_drivers_license;
    cout << "Enter the driver's age: ";
    cin >> driver_age;
    cout << "Does the driver have a valid driver's license? (1 for yes, 0 for no): ";
    cin >> has_drivers_license;
    if (driver_age > 21 && has_drivers_license==true) {
        cout << "The driver is eligible to drive." << endl;
    } else {
        cout << "The driver is not eligible to drive." << endl;
    }

    // 8# pass / fail
    float grade;
    cout << "Enter the student's grade: ";
    cin >> grade;
    if (grade >= 50) {
        cout << "The student has passed." << endl;
    } else {
        cout << "The student has failed." << endl;
    }


    // 11# Average Pass / Fail



    float average ,m1 ,m2 ,m3;
    cout << "Enter the first mark: ";
    cin >> m1;
    cout << "Enter the second mark: ";
    cin >> m2;
    cout << "Enter the third mark: ";
    cin >> m3;
    average = round((m1 + m2 + m3) / 3);
    if (average >= 50) {
        cout << "The student has passed with an average of " << average << "." << endl;
    } else {
        cout << "The student has failed with an average of " << average << "." << endl;
    }
    
    // 24# Validate Age between 18 and 45

    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18 && age <= 45) {
        cout << "Your age is valid." << endl;
    } else {
        cout << "Your age is not valid." << endl;
    }

    // 49# ATM PIN

    int pin;
    cout << "Enter your ATM PIN: ";
    cin >> pin;
    if (pin == 1234) {
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied." << endl;
    }


    return 0;
}