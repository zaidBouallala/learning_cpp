#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    enum Gender {Male, Female};
    enum Status {Single, Married};
    enum favoriteColor {Red, Green, Blue, Yellow};
string name , city, country;
   int age ;
   float monthly_salary;
   double yearly_salary = monthly_salary *  12;
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
// cout << "Enter your gender 1 for Male, 2 for Female : ";
// cin >> gender ;
// cout << "Enter whether you are married (1 for yes, 0 for no) : ";
// cin >> is_married ;
// cout << "Enter your favorite color 1 for Red, 2 for Green, 3 for Blue, 4 for Yellow : ";
// cin >> favorite_color ;
// display the information
   cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "City : " << city << endl;
    cout << "Country : " << country << endl;
    cout << "Monthly Salary : " << monthly_salary  << endl;
    cout << "Yearly Salary : " << yearly_salary << endl;
    cout << "Gender : " << Gender::Female << endl;
    cout << "Is Married : " << Status::Married << endl;
    cout << "Favorite Color : " << favoriteColor::Blue << endl;  




    return 0;
}