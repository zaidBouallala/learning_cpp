#include <iostream>

using namespace std;
int main()
{
     
    bool a = 1 , b = 0;

    cout << "a && b: " << (a && b) << endl; // is a and b? false
    cout << "a || b: " << (a || b) << endl; // is a or b? true
    cout << "!a: " << (!a) << endl; // is not a?
    cout << "!b: " << (!b) << endl; // is not b?
    cout << "a && !b: " << (a && !b) << endl; // is a and not b? true
    cout << "a || !b: " << (a || !b) << endl; // is a or not b? true
    cout << "!a && b: " << (!a && b) << endl; // is not a and b? false
    cout << "!a || b: " << (!a || b) << endl; // is not a or b? false
    cout << "a && b || !a: " << (a && b || !a) << endl; // is a and b or not a? true
    cout << "a || b && !a: " << (a || b && !a) << endl; // is a or b and not a? true
    cout << "!(a && b): " << (!(a && b)) << endl; // is not (a and b)? true
    cout << "!(a || b): " << (!(a || b)) << endl; // is not (a or b)? false




    bool resualt;

    //  not(5 > 6  or 7 = 7) and not (1 or false)

    resualt = !(5>6 || 7 == 7 ) && !(1 || 0 );

    cout << resualt << endl;



    return 0;
}