#include <iostream> 
using namespace std;
enum enWeekDays {Saturday=7, Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6};

void showWeekDayMenue(){
    cout << "**************************************" << endl;
    cout << "Week Days" << endl;
    cout << "**************************************" << endl;
    cout << "1. Sunday" << endl;
    cout << "2. Monday" << endl;
    cout << "3. Tuesday" << endl;
    cout << "4. Wednesday" << endl;
    cout << "5. Thursday" << endl;
    cout << "6. Friday" << endl;
    cout << "7. Saturday" << endl;
    cout << "**************************************" << endl;
    cout << "Please enter a number between 1 and 7 to choose a day of the week: ";
}

enWeekDays ReadWeekDay(){
    enWeekDays WeekDay;
    WeekDay = enWeekDays::Sunday;
    int wd;

    cin >> wd;
    return (enWeekDays)wd;
}

string getWeekDayName(enWeekDays WeekDay){
    switch(WeekDay){
        case enWeekDays::Saturday: return "Saturday";
        case enWeekDays::Sunday: return "Sunday";
        case enWeekDays::Monday: return "Monday";
        case enWeekDays::Tuesday: return "Tuesday";
        case enWeekDays::Wednesday: return "Wednesday";
        case enWeekDays::Thursday: return "Thursday";
        case enWeekDays::Friday: return "Friday";
        default: return "Invalid day";
    }
}
int main()
{
    showWeekDayMenue();
    cout << "to day is : " << getWeekDayName(ReadWeekDay()) << endl;
    return 0;
}