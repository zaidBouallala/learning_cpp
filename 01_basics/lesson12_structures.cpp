#include <iostream>
using namespace std;


struct stOwner
{
    string FullName;
    string Phone;
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



    MyCar2.Brand = "Ford";
    MyCar2.Model = "Mustang";
    MyCar2.Year = 2022;
    MyCar2.Owner.FullName = "zaid Bouallala";
    MyCar2.Owner.Phone = "+2126028192555";

    //cin>>MyCar1.Year;

    cout <<  MyCar1.Brand  <<endl<< MyCar1.Model  <<endl<<  MyCar1.Year <<endl ;
    cout << MyCar1.Owner.FullName << " "  << MyCar1.Owner.Phone <<endl;

    cout <<  MyCar2.Brand  <<endl<< MyCar2.Model  <<endl<<  MyCar2.Year <<endl;
    cout << MyCar2.Owner.FullName << " "  << MyCar2.Owner.Phone <<endl;

}
