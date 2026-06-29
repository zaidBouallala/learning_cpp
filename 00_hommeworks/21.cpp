#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//#42 (Task Duration In Seconds): Write a program to calculate the total duration in seconds from user-inputted days, hours, minutes, and seconds.

float calculateTotalSeconds(unsigned int days, unsigned int hours, unsigned int minutes, unsigned int seconds) {
    return round((days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds);
}

//#43 (Seconds to Days, Hours, Minutes, Seconds): Write a program to take a large total number of seconds and break it down into its equivalent days, hours, minutes, and remaining seconds.

void convertSecondsToDHMS(unsigned int total_seconds) {
    unsigned int days = total_seconds / (24 * 60 * 60);
    unsigned int remaining_seconds = total_seconds % (24 * 60 * 60);
    unsigned int hours = remaining_seconds / (60 * 60);
    remaining_seconds %= (60 * 60);
    unsigned int minutes = remaining_seconds / 60;
    unsigned int seconds = remaining_seconds % 60;

    cout << "The total duration is: " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;
}

int main()
{
    unsigned int days, hours, minutes, seconds, total_seconds;
    cout << "Enter the number of days: ";
    cin >> days;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    total_seconds = calculateTotalSeconds(days, hours, minutes, seconds);
    cout << "The total duration in seconds is: " << total_seconds << endl;

    convertSecondsToDHMS(total_seconds);
    
    

    return 0;
}