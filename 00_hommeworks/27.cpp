#include <iostream>
using namespace std;

struct stInfo 
{
    string firestName;
    string lastName;
    int age;
    string phone;
};
void readPersonInfo(stInfo &person) 
{
    cout << "Enter your first name: ";
    cin >> person.firestName;
    cout << "Enter your last name: ";
    cin >> person.lastName;
    cout << "Enter your age: ";
    cin >> person.age;
    cout << "Enter your phone number: ";
    cin >> person.phone;
}

void printPersonInfo( stInfo person) 
{
    cout << "----------------------------------------" << endl; 
    cout << "First Name: " << person.firestName << endl;
    cout << "Last Name: " << person.lastName << endl;
    cout << "Age: " << person.age << endl;
    cout << "Phone: " << person.phone << endl;
}

void printPersonsInfo(stInfo persons[2]) 


{
    
    printPersonInfo(persons[0]);
    printPersonInfo(persons[1]);
}

void readPersonsInfo(stInfo persons[2]) 
{
    readPersonInfo(persons[0]);
    readPersonInfo(persons[1]);
}
int main()
{
    stInfo persons[2];
    readPersonsInfo(persons);
    printPersonsInfo(persons);
    return 0;
}
