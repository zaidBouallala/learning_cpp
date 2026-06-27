#include <iostream>
using namespace std;


struct stAddress
{
    string Street;
    string POBOX;
    string City;
    string Country;
};

struct stOwner
{
    string FullName;
    string Phone;
    stAddress Address;
}; 



struct Car{
    string Brand;
    string Model;
    int Year;
    stOwner Owner;
};

int main()
{


    Car MyCar1 , MyCar2;

    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;
    MyCar1.Owner.FullName = "zaid Bouallala";
    MyCar1.Owner.Phone = "+2126028192555";
    MyCar1.Owner.Address.Street = "123 Main Street";
    MyCar1.Owner.Address.POBOX = "456";
    MyCar1.Owner.Address.City = "Casablanca";
    MyCar1.Owner.Address.Country = "Morocco";


    MyCar2.Brand = "Ford";
    MyCar2.Model = "Mustang";
    MyCar2.Year = 2022;
    MyCar2.Owner.FullName = "zaid Bouallala";
    MyCar2.Owner.Phone = "+2126028192555";
    MyCar2.Owner.Address.Street = "789 Oak Avenue";
    MyCar2.Owner.Address.POBOX = "101";
    MyCar2.Owner.Address.City = "Rabat";
    MyCar2.Owner.Address.Country = "Morocco";

    //cin>>MyCar1.Year;

    cout <<  MyCar1.Brand  <<endl<< MyCar1.Model  <<endl<<  MyCar1.Year <<endl ;
    cout << MyCar1.Owner.Address.Street << " " << MyCar1.Owner.Address.POBOX << " " << MyCar1.Owner.Address.City << " " << MyCar1.Owner.Address.Country << endl;
    cout << MyCar1.Owner.FullName << " "  << MyCar1.Owner.Phone <<endl;

    cout <<  MyCar2.Brand  <<endl<< MyCar2.Model  <<endl<<  MyCar2.Year <<endl;
    cout << MyCar2.Owner.Address.Street << " " << MyCar2.Owner.Address.POBOX << " " << MyCar2.Owner.Address.City << " " << MyCar2.Owner.Address.Country << endl;
    cout << MyCar2.Owner.FullName << " "  << MyCar2.Owner.Phone <<endl;



    return 0;
}
