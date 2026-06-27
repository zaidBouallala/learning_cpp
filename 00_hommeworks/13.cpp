#include <iostream>

using namespace std;


struct stContact
{
    string name;
    string phone;
    string email;
};

struct stAddress
{
    string Street;
    string POBOX;
    string City;
    string Country;
};
struct stPerson
{

    string name;
    int age;
    stAddress Address;
    float monthly_salary;
    char gender;
    bool is_married;
    stContact contact;
};

int main()
{
    stPerson person;

    // ask the user for informations 
    cout << "Enter your name : ";
    cin >> person.name;
    cout << "Enter your age : ";
    cin >> person.age;
    cout << "Enter your street address : ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, person.Address.Street);
    cout << "Enter your POBOX : ";
    getline(cin, person.Address.POBOX);
    cout << "Enter your city : ";
    getline(cin, person.Address.City);
    cout << "Enter your country : ";
    getline(cin, person.Address.Country);
    cout << "Enter your monthly salary : ";
    cin >> person.monthly_salary;
    cout << "Enter your gender : ";
    cin >> person.gender;
    cout << "Enter whether you are married (1 for yes, 0 for no) : ";
    cin >> person.is_married;
    cout << "Enter your contact name : ";
    cin.ignore();
    getline(cin, person.contact.name);
    cout << "Enter your contact phone : ";
    getline(cin, person.contact.phone);
    cout << "Enter your contact email : ";
    getline(cin, person.contact.email);

    // display the information
    cout << "Name : " << person.name << endl;
    cout << "Age : " << person.age << endl;
    cout << "City : " << person.Address.City << endl;
    cout << "Country : " << person.Address.Country << endl;
    cout << "Monthly Salary : " << person.monthly_salary  << endl;
    cout << "Yearly Salary : " << person.monthly_salary * 12 << endl;
    cout << "Gender : " << person.gender << endl;
    cout << "Is Married : " << person.is_married << endl; 
    cout << "Contact Name : " << person.contact.name << endl;
    cout << "Contact Phone : " << person.contact.phone << endl;
    cout << "Contact Email : " << person.contact.email << endl;

    return 0;
}