#include <iostream>
using namespace std;


  enum enColor {Red, Green, Yellow, Blue};
    enum enGender {Male, Female};
    enum eMaritalStatus {Single, Married};

    struct stAddress
    {
        string StreetName;
        string BuldingNo;
        string POBOX;
        string zipCode;
    };

    struct stContactInfo
    {
        
        string Phone;
        string Email;
        stAddress Address;
    };

    struct stPerson
    {
        string FirstName;
        string LastName;
       stContactInfo ContactInfo;
       eMaritalStatus MaritalStatus;    
       enGender Gender;
        enColor FavoriteColor;
    };



int main()
{

    stPerson person1;

    person1.FirstName = "John";
    person1.LastName = "Doe";
    person1.ContactInfo.Phone = "+1234567890";
    person1.ContactInfo.Email = "john.doe@example.com";
    person1.ContactInfo.Address.StreetName = "Main Street";
    person1.ContactInfo.Address.BuldingNo = "123";
    person1.ContactInfo.Address.POBOX = "456";
    person1.ContactInfo.Address.zipCode = "7890";
    person1.Gender = enGender::Male;
    person1.MaritalStatus = eMaritalStatus::Single;
    person1.FavoriteColor = enColor::Blue;

    cout << "First Name: " << person1.FirstName << endl;
    cout << "Last Name: " << person1.LastName << endl;
    cout << "Phone: " << person1.ContactInfo.Phone << endl;
    cout << "Email: " << person1.ContactInfo.Email << endl;
    cout << "Address: " << person1.ContactInfo.Address.StreetName << ", "
         << person1.ContactInfo.Address.BuldingNo << ", "
         << person1.ContactInfo.Address.POBOX << ", "
         << person1.ContactInfo.Address.zipCode << endl;
    cout << "Gender: " << (person1.Gender == enGender::Male ? "Male" : "Female") << endl;
    cout << "Marital Status: " << (person1.MaritalStatus == eMaritalStatus::Single ? "Single" : "Married") << endl;




    return  0;
}