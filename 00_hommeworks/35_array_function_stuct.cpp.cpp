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
    cout << "----------------------------------------" << endl;
}

void printPersonInfo( stInfo person) 
{
    cout << "----------------------------------------" << endl; 
    cout << "First Name: " << person.firestName << endl;
    cout << "Last Name: " << person.lastName << endl;
    cout << "Age: " << person.age << endl;
    cout << "Phone: " << person.phone << endl;
}

void printPersonsInfo(stInfo persons[], int size) 


{
    
    for(int i = 0; i < size; i++){
        printPersonInfo(persons[i]);
    }
}

void readPersonsInfo(stInfo persons[], int &size) 
{
    cout << "Enter the number of persons: ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cout << "Enter information for person " << i + 1 << ":" << endl;  
    readPersonInfo(persons[i]);

}
}



int main()
{
    int size;
    stInfo persons[100];
    readPersonsInfo(persons, size);
    printPersonsInfo(persons, size);
    return 0;
}
