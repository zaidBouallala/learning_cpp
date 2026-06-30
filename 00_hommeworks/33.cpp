#include <iostream>
using namespace std;
enum enMonth {January=1, February, March, April, May, June, July, August, September, October, November, December};

void showMonthsMenu(){
    cout << "**************************************" << endl;
    cout << "Months of the Year" << endl;
    cout << "**************************************" << endl;
    cout << "1. January" << endl;
    cout << "2. February" << endl;
    cout << "3. March" << endl;
    cout << "4. April" << endl;
    cout << "5. May" << endl;
    cout << "6. June" << endl;
    cout << "7. July" << endl;
    cout << "8. August" << endl;
    cout << "9. September" << endl;
    cout << "10. October" << endl;
    cout << "11. November" << endl;
    cout << "12. December" << endl;
    cout << "**************************************" << endl;
}

enMonth ReadMonth(){
    enMonth Month;
    Month = enMonth::January;
    int m;

    cin >> m;
    return (enMonth)m;
}

int main()
{
    showMonthsMenu();
    cout << "The month is: " << ReadMonth() << endl;
    return 0;
}
   