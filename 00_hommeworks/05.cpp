#include <iostream>
using namespace std;

int main()
{
    // 7# half Numbers
    short int number;
    cout<<"Enter a Number : ";
    cin>>number;
    cout << "the half of the number "<< number << " is : " << number /  2  << endl;


    // 9#  sum of 3 numbers 
    float n1 ,n2 ,n3 ,sum , avg;
    cout << "Enter the first number" << endl;
    cin >> n1;
    
    cout << "Enter the scound number" << endl;
    cin >> n2;

    cout << "Enter the therd number" << endl;
    cin >> n3;
    sum = n1 + n2 + n3;

    cout << "The some of the 3 numbers is :  " << sum << endl;

    // 10# Average

    avg = sum/3;

    cout << "The average of the 3 numbers is :  " << avg << endl;

    //14# Swap 2 Numbers 

    short unsigned x , y , swap ;
    cout << "Enter the value of X : "<<endl;
    cin>> x;
    cout << "Enter the value of Y : "<< endl;
    cin>> y;
    cout << "Before the SWAP the value of X IS : "<<x <<" and Y is : "<<y <<endl;
    swap = x;
    x = y;
    y = swap;

    cout << "After the SWAP the value of X IS : "<<x <<" and Y is : "<<y <<endl;
    
    // 15# Rectangle Area :

    float lg , with ;
    cout << "Enter the long  of the rectangle: "<< endl;
    cin >> lg;
    cout << "Enter the width of the rectangle: "<< endl;
    cin >> with ;

    cout << "The value of the Rectangle Area is : "<< lg * with <<endl;

    // 17# Triangle Area 
    float basse , height;

    cout << "Enter the values of the base  of the triangle : "<< endl;
    cin >>basse;
    cout << "Enter the values of the height of the triangle : "<< endl;
    cin >> height;
    cout << "The value of the Triangle Area is : "<< (basse * height)/2 <<endl;
    




    return 0;
}
 