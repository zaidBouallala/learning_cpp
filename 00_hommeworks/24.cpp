#include <iostream>
#include <string>

using namespace std;
struct stPerson 
{
    
    string name;
    int age;
    string city;
    string country;
    float monthly_salary;
    char gender;
    bool is_married;


};

void ReadPersonInfo(stPerson &person)
{
    cout << "Enter your name : ";
    cin >> person.name;
    cout << "Enter your age : ";
    cin >> person.age;
    cout << "Enter your city : ";
    cin >> person.city;
    cout << "Enter your country : ";
    cin >> person.country;
    cout << "Enter your monthly salary : ";
    cin >> person.monthly_salary;
    cout << "Enter  your gender : ";
    cin >> person.gender;
    cout << "Enter whether you are married (1 for yes, 0 for no) : ";
    cin >> person.is_married;   
};

void PrintPersonInfo(stPerson person)
{
    cout << "Name : " << person.name << endl;
    cout << "Age : " << person.age << endl;
    cout << "City : " << person.city << endl;
    cout << "Country : " << person.country << endl;
    cout << "Monthly Salary : " << person.monthly_salary  << endl;
    cout << "Yearly Salary : " << (float)person.monthly_salary * 12 << endl;
    cout << "Gender : " << person.gender << endl;
    cout << "Is Married : " << person.is_married << endl;           
}

int main()
{
    
    stPerson person;
    ReadPersonInfo(person);
    PrintPersonInfo(person);
    return 0;
}
