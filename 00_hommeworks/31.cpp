#include <iostream>
using namespace std;
enum enOperation {Addition = '+', Subtraction = '-', Multiplication = '*', Division = '/'};

void readNumbers(float &num1, float &num2) {
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
}

enOperation readOperation() {
    char op;
    cin >> op;
    return static_cast<enOperation>(op);
}

float getResult(float num1, float num2, enOperation operation) {
    switch (operation) {
        case enOperation::Addition:
            return num1 + num2;
        case enOperation::Subtraction:
            return num1 - num2;
        case enOperation::Multiplication:
            return num1 * num2;
        case enOperation::Division:
            return num1 / num2;
        default:
            cout << "Invalid operation." << endl;
            return 0;
    }
}

int main()
{
  float num1, num2;
  readNumbers(num1, num2);
    cout << "Enter the operation (+, -, *, /): ";
    enOperation operation = readOperation();
    float result = getResult(num1, num2, operation);
    cout << "The result is: " << result << endl;
    return 0;
}
  