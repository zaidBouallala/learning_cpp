#include <iostream>
using namespace std;

int main()
{
    // #36 Simple Calculator
    float num1, num2, result;
    char operation;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

   switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operation." << endl;
    };

    cout << "The result is: " << result << endl;

    // #44 Day of Week
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "The day is Sunday. (Weekend)" << endl;
            break;
        case 2:
            cout << "The day is Monday. (Business Day)" << endl;
            break;
        case 3:
            cout << "The day is Tuesday. (Business Day)" << endl;
            break;
        case 4:
            cout << "The day is Wednesday. (Business Day)" << endl;
            break;
        case 5:
            cout << "The day is Thursday. (Business Day)" << endl;
            break;
        case 6:
            cout << "The day is Friday. (Business Day)" << endl;
            break;
        case 7:
            cout << "The day is Sunday. (Weekend)" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }

  
    // #45 Month of Year
    int month;
    cout << "Enter a number (1-12) for the month of the year: ";
    cin >> month;
    switch (month) {
        case 1:
            cout << "The month is January." << endl;
            break;
        case 2:
            cout << "The month is February." << endl;
            break;
        case 3:
            cout << "The month is March." << endl;
            break;
        case 4:
            cout << "The month is April." << endl;
            break;
        case 5:
            cout << "The month is May." << endl;    
            break;
        case 6:
            cout << "The month is June." << endl;
            break;
        case 7:
            cout << "The month is July." << endl;
            break;
        case 8:
            cout << "The month is August." << endl;
            break;
        case 9:
            cout << "The month is September." << endl;
            break;
        case 10:
            cout << "The month is October." << endl;
            break;
        case 11:
            cout << "The month is November." << endl;
            break;
        case 12:
            cout << "The month is December." << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 12." << endl;
    }
    return 0;
}
  