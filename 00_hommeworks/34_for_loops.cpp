#include <iostream>
using namespace std;
void printNumbers(int n){
    for(int i = 1;i<=n;i++){
        cout << i <<endl;
    }
}
void readNumbers(int &n){
    cout << "Enter a number: ";
    cin >> n;
}

void printNumbers_desc(int n){
    for(int i = n;i>=1;i--){
        cout << i <<endl;
    }
}

float sumOddNumbers(int n){
    float sum = 0;
    for(int i =1 ; i<= n ; i++){
        if(i % 2 != 0){
            sum += i;
        }   
    }
    return sum;
}

float sumEvenNumbers(int n){
    float sum = 0;
    for(int i =1 ; i<= n ; i++){
        if(i % 2 == 0){
            sum += i;
        }   
    }
    return sum;
}
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

float power(int base, int exponent){
    float result = 1;
    for(int i = 1; i <= exponent; i++){
        result *= base;
    }
    return result;
}

void printLetters(){
    for(int i = 65; i <= 90; i++){
        cout << (char)i << " ";
    }
    cout << endl;
}


void printLowercaseLetters(){
    for(int i = 97; i <= 122; i++){
        cout << (char)i << " ";
    }
    cout << endl;
}

void printBothCases(){
    printLetters();
    printLowercaseLetters();
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
    return 0;
}