#include <iostream>
using namespace std;


struct stInfo
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

// what is the difference between * and & in c++ before a variable name or parameter in a function?
// * is used to declare a pointer variable, which holds the memory address of another variable.
// & is used to declare a reference variable, which is an alias for another variable.
 
void ReadInfo(stInfo &Info){
    
    cout << "Enter your first name: ";
    cin >> Info.firstName;
    cout << "Enter your last name: ";
    cin >> Info.lastName;
    cout << "Enter your age: ";
    cin >> Info.age;
    cout << "Enter your phone number: ";
    cin >> Info.phone;
}

void PrintInfo( stInfo Info){
    cout << "First Name: " << Info.firstName << endl;
    cout << "Last Name: " << Info.lastName << endl;
    cout << "Age: " << Info.age << endl;
    cout << "Phone: " << Info.phone << endl;
};  

int main()
{
    stInfo PersonInfo;
    ReadInfo(PersonInfo);
    PrintInfo(PersonInfo);
    PrintInfo(PersonInfo);
    PrintInfo(PersonInfo);
    return 0;
}