#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // #23 area of cirecle inside a random triangle using a, b and c
    float a , b , c , s , area;
    const float PI = 3.14;
    cout << "Enter the value of a : "<< endl;
    cin >> a;
    cout << "Enter the value of b : "<< endl;
    cin >> b;
    cout << "Enter the value of c : "<< endl;
    cin >> c;
    s = (a + b + c) / 2;
    area = floor(PI * pow(a* b * c  / 4 * sqrt(s * (s - a) * (s - b) * (s - c)),2));

    cout << "The value of the area of the circle inside a random triangle is : "<< area <<endl;

    // #31 power of a number using pow function
    float number, power;
    cout << "Enter the value of the number : "<< endl;
    cin >> number;
    cout << "Enter the value of the power : "<< endl;
    cin >> power;
    float result = pow(number, power);
    cout << "The value of the number raised to the power is : "<< result <<endl;




    // #42# task duration in seconds 

    unsigned int days, hours, minutes, seconds, total_seconds;
    cout << "Enter the number of days : "<< endl;
    cin>> days ;
    cout << "Enter the number of hours : "<< endl;
    cin>> hours ;
    cout << "Enter the number of minutes : "<< endl;
    cin>> minutes ;
    cout << "Enter the number of seconds : "<< endl;
    cin>> seconds ;

    total_seconds = round((days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds);
    cout << "The total duration in seconds is : "<< total_seconds <<endl;


    // #43# reverse of the previous task duration in seconds to days, hours, minutes and seconds
    unsigned int total_days, total_hours, total_minutes, total_seconds_remaining;
    unsigned int total_minutes;

    total_days = total_seconds / (24 * 60 * 60);
    total_seconds_remaining = total_seconds % (24 * 60 * 60);
    total_hours = total_seconds_remaining / (60 * 60);
    total_seconds_remaining %= (60 * 60);
    total_minutes = total_seconds_remaining / 60;
    total_seconds_remaining %= 60;

    cout << "The total duration is : "<< total_days << " days, " << total_hours << " hours, " << total_minutes << " minutes, and " << total_seconds_remaining << " seconds." << endl;



    return 0;
}