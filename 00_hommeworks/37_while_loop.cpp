#include <iostream>
using namespace std;
// #26 Print Numbers from 1 to N
void printNumbers(int n){
    int i = 1;
    while(i<=n){
      cout << i <<endl;
      i++  ;
    }
}
void readNumbers(int &n){
    cout << "Enter a number: ";
    cin >> n;
    while(n < 1){
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> n;
    }
}

void printNumbers_desc(int n){
    int i = n;
    while(i>=1){
        cout << i <<endl;
        i--;
    }
}

float sumOddNumbers(int n){
    int i =1 ;
    float sum = 0;
    while( i<= n ){
        if(i % 2 != 0){
            sum += i;
            i++;
        }   
    }
    return sum;
}

float sumEvenNumbers(int n){
    float sum = 0;
    int i = 1;
    while( i<= n ){
        if(i % 2 == 0){
            sum += i;
        }   
    }
    return sum;
}
int factorial(int n){
    int fact = 1;
    int i = 1;
    while( i <= n){
        fact *= i;
     i++   ; 
    }
    return fact;
}

float power(int base, int exponent){
    float result = 1;
    int i = 1;
    while( i <= exponent){
        result *= base;
         i++;
    }
    return result;
}

void printLetters(){
    int i = 65;
    while(i <= 90){
        cout << (char)i << " ";
        i++;
    }
    cout << endl;
}


void printLowercaseLetters(){
    int i = 97;
    while(i <= 122){
        cout << (char)i << " ";
        i++;
    }
    cout << endl;
}

void printBothCases(){
    printLetters();
    printLowercaseLetters();
}




// 37 While Loop Exercises sum numbers

int sumNumbers(){
    cout << "Enter a positive integer: ";
    int n;
   int sum = 0;
    while(n<0){
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> n;
int m;

        while(m!= -1){
            
            cout << "Enter a number (-1 to stop): ";
            cin >> m;
            if(m != -1){
                sum += m;
            }
        }
        
    }
    return sum;
}

//#50 (الرقم السري بـ 3 محاولات - ATM PIN Loop):
void atmPinLoop(){
    const int correctPin = 1234;
    int enteredPin;
    int attempts = 0;
    const int maxAttempts = 3;

    while(attempts < maxAttempts){
        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if(enteredPin == correctPin){
            cout << "Access granted." << endl;
            return;
        } else {
            attempts++;
            cout << "Incorrect PIN. Attempts left: " << (maxAttempts - attempts) << endl;
        }
    }
    cout << "Access denied. Too many incorrect attempts." << endl;
}

int main()
{
    //#26 Print Numbers from 1 to N
    int n;
    readNumbers(n);
    printNumbers(n);
    //#27 Print Numbers from N to 1
    printNumbers_desc(n);


    // #28 Sum Odd Numbers from 1 to N
    float oddSum = sumOddNumbers(n);
    cout << "Sum of odd numbers from 1 to " << n << " is: " << oddSum << endl;

    // #29 Sum Even Numbers from 1 to N
    float evenSum = sumEvenNumbers(n);
    cout << "Sum of even numbers from 1 to " << n << " is: " << evenSum << endl;


    //#30 Factorial of a number
    int fact = factorial(n);
    cout << "Factorial of " << n << " is: " << fact << endl;

    // #32 Power of M 
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    float powerResult = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << powerResult << endl;


    // #46 Print Letters from A to Z
    printLetters();
    // #47 Print Letters from a to z
    printLowercaseLetters();
    // #48 Print Letters from A to Z and a to z
    printBothCases();

    sumNumbers();
    atmPinLoop();
    return 0;
}