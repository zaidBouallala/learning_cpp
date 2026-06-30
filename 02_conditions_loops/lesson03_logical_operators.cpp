#include <iostream>
using namespace std;


enum enScreenColor {Red=1, Green=2, Yellow=3, Blue=4};
enum enCountryChoice {Jordan=1, Canada=2, Mexico=3, USA=4, UK=5, France=6, Germany=7, Italy=8, Spain=9, Portugal=10, Australia=11, NewZealand=12, Japan=13, China=14, India=15, Brazil=16, Argentina=17, Chile=18, Peru=19, Colombia=20, SouthAfrica=21, Egypt=22, Morocco=23, Tunisia=24, Algeria=25, SaudiArabia=26, UAE=27, Qatar=28, Kuwait=29, Bahrain=30, Oman=31, Turkey=32, Greece=33, Russia=34, Ukraine=35, Poland=36, CzechRepublic=37, Slovakia=38, Hungary=39, Romania=40};

int main()
{
    cout << "****************************************\n";
    cout << "Please choose your favorite color from the following options:\n";
    cout << "1. Red\n";
    cout << "2. Green\n";
    cout << "3. Yellow\n";
    cout << "4. Blue\n";
    cout << "****************************************\n";
    cout << "Your choice? ";
    int c ;
    enScreenColor Color;
    cin >> c;
    Color = (enScreenColor)c;

    if(Color == enScreenColor::Red) {
        cout << "You chose Red." << endl;
        system("color 4F");
    } else if (Color == enScreenColor::Green) {
        cout << "You chose Green." << endl;
        system("color 2F");
    } else if (Color == enScreenColor::Yellow) {
        cout << "You chose Yellow." << endl;
        system("color 6F");
    } else if (Color == enScreenColor::Blue) {
        cout << "You chose Blue." << endl;
        system("color 1F");
    } else {
        cout << "Invalid choice." << endl;
        system("color 7F");
    }

    // 

    int countryChoice;
    enCountryChoice Country;
    cout << "****************************************\n";
    cout << "Please choose your favorite country from the following options:\n";
    cout << "1. Jordan\n";
    cout << "2. Canada\n";
    cout << "3. Mexico\n";
    cout << "4. USA\n";
    cout << "5. UK\n";
    cout << "6. France\n";
    cout << "7. Germany\n";
    cout << "8. Italy\n";
    cout << "9. Spain\n";
    cout << "10. Portugal\n";
    cout << "****************************************\n";
    cout << "Your choice? ";
    cin >> countryChoice;
    Country = (enCountryChoice)countryChoice;

    if(Country == enCountryChoice::Jordan) {
        cout << "You chose Jordan." << endl;
    } else if (Country == enCountryChoice::Canada) {
        cout << "You chose Canada." << endl;
    } else if (Country == enCountryChoice::Mexico) {
        cout << "You chose Mexico." << endl;
    } else if (Country == enCountryChoice::USA) {
        cout << "You chose USA." << endl;
    } else if (Country == enCountryChoice::UK) {
        cout << "You chose UK." << endl;
    } else if (Country == enCountryChoice::France) {
        cout << "You chose France." << endl;
    } else if (Country == enCountryChoice::Germany) {
        cout << "You chose Germany." << endl;
    } else if (Country == enCountryChoice::Italy) {
        cout << "You chose Italy." << endl;
    } else if (Country == enCountryChoice::Spain) {
        cout << "You chose Spain." << endl;
    } else if (Country == enCountryChoice::Portugal) {
        cout << "You chose Portugal." << endl;
    } else {
        cout << "Invalid choice." << endl;
    }


    return 0;
}
