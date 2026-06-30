#include <iostream>
using namespace std;

int main()
{
    // #33 Grade Evaluator
    float grade;
    cout << "Enter the student's grade: ";
    cin >> grade;
    if (grade >= 90) {
        cout << "The student has an A grade." << endl;
    } else if (grade >= 80) {
        cout << "The student has a B grade." << endl;
    } else if (grade >= 70) {
        cout << "The student has a C grade." << endl;
    } else if (grade >= 60) {
        cout << "The student has a D grade." << endl;
    } else {
        cout << "The student has an F grade." << endl;
    }

    // #34 Commission Percentage
    float total_sales, commission;
    cout << "Enter the total sales amount: ";
    cin >> total_sales;
    if (total_sales >= 1000000) {
        cout << "The commission percentage is 1%." << endl;
        commission = total_sales * 0.01;
    } else if (total_sales >= 500000) {
        cout << "The commission percentage is 2%." << endl;
        commission = total_sales * 0.02;
    } else if(total_sales >= 100000) {
        cout << "The commission percentage is 3%." << endl;
        commission = total_sales * 0.03;
    }else if(total_sales >= 50000) {
        cout << "The commission percentage is 5%." << endl;
        commission = total_sales * 0.05;
    } else {
        cout << "The commission percentage is 0%." << endl;
        commission = total_sales * 0.00;
    }
    cout << "The commission amount is: " << commission << endl;

    // #36 Simple Calculator
    float num1, num2, result;
    char operation;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        result = num1 / num2;
    } else {
        cout << "Invalid operation." << endl; 
    }

    cout << "The result is: " << result << endl;

    // #44 Day of Week
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    if (day == 1) {
        cout << "The day is Sunday. (Weekend)" << endl;
    } else if (day == 2) {
        cout << "The day is Monday. (Business Day)" << endl;
    } else if (day == 3) {
        cout << "The day is Tuesday. (Business Day)" << endl;
    } else if (day == 4) {
        cout << "The day is Wednesday. (Business Day)" << endl;
    } else if (day == 5) {
        cout << "The day is Thursday. (Business Day)" << endl;
    } else if (day == 6) {
        cout << "The day is Friday. (Business Day)" << endl;
    } else if (day == 7) {
        cout << "The day is Sunday. (Weekend)" << endl;
    } else {
        cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }

    // #45 Month of Year
    int month;
    cout << "Enter a number (1-12) for the month of the year: ";
    cin >> month;
    if(month == 1) {
        cout << "The month is January." << endl;
    } else if (month == 2) {
        cout << "The month is February." << endl;
    } else if (month == 3) {
        cout << "The month is March." << endl;
    } else if (month == 4) {
        cout << "The month is April." << endl;
    } else if (month == 5) {
        cout << "The month is May." << endl;
    } else if (month == 6) {
        cout << "The month is June." << endl;
    } else if (month == 7) {
        cout << "The month is July." << endl;
    } else if (month == 8) {
        cout << "The month is August." << endl;
    } else if (month == 9) {
        cout << "The month is September." << endl;
    } else if (month == 10) {
        cout << "The month is October." << endl;
    } else if (month == 11) {
        cout << "The month is November." << endl;
    } else if (month == 12) {
        cout << "The month is December." << endl;
    } else {
        cout << "Invalid input. Please enter a number between 1 and 12." << endl;
    }

    
    return 0;
}
  