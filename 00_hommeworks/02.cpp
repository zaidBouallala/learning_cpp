#include <iostream>
using namespace std;


int main()
{
  
   string name , city, country;
   int age ;
   float monthly_salary;
   double yearly_salary = monthly_salary *  12;
   char gender;
   bool is_married;
// ask the user for informations 
cout << "Enter your name : ";
cin>> name ;
cout << "Enter your age : ";
cin>> age ;
cout << "Enter your city : ";
cin >> city ;
cout << "Enter your country : ";
cin >> country ;
cout << "Enter your monthly salary : ";
cin >> monthly_salary ;
cout << "Enter your gender : ";
cin >> gender ;
cout << "Enter whether you are married (1 for yes, 0 for no) : ";
cin >> is_married ;
// display the information
   cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "City : " << city << endl;
    cout << "Country : " << country << endl;
    cout << "Monthly Salary : " << monthly_salary  << endl;
    cout << "Yearly Salary : " << yearly_salary << endl;
    cout << "Gender : " << gender << endl;
    cout << "Is Married : " << is_married << endl;  


    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << b << "+" << endl;
    cout << c << "+" << endl;
    cout << a <<endl;
    cout <<"________________________________________"<< endl;
    cout <<"Total = "<< a+b+c << endl;

    int my_age ;
    cout << "Enter your age: ";
    cin >> my_age;
    cout << "After 5 years you will be " << my_age + 5 << " years old." << endl;
    
    return 0;
} 

