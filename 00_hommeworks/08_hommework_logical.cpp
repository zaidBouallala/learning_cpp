#include <iostream>
using namespace std;

int main()
{
    cout << "Logical Operators in C++" << endl;

    cout <<"12 >= 12 : " << (12 >= 12) << endl; // gives true 
    cout <<"12 > 7 : " << (12 > 7) << endl; // gives true 
    cout <<"8 < 6 : " << (8 < 6) << endl; // gives false
    cout <<"8 == 8 : " << (8 == 8) << endl; // gives true
    cout <<"12 <=  12 : " << (12 <= 12) << endl; // gives true
    cout <<"7 ==  5 : " << (7 == 5) << endl; // gives false
    
    cout <<"NOT(12 >= 12) : " << !(12 >= 12) << endl; // gives false 
    cout <<"NOT(12 > 7) : " << !(12 > 7) << endl; // gives false 
    cout <<"NOT(8 < 6) : " << !(8 < 6) << endl; // gives true
    cout <<"NOT(8 == 8) : " << !(8 == 8) << endl; // gives false
    cout <<"NOT(12 <= 12) : " << !(12 <= 12) << endl; // gives false
    cout <<"NOT(7 == 5) : " << !(7 == 5) << endl; // gives true


    cout << "1 and 1 : " << (1 && 1) << endl; // gives true
    cout << "true and 0 : " << (1 && 0) << endl; // gives false
    cout << "0 or 1 : " << (0 || 1) << endl; // gives true
    cout << "0 or 0 : " << (0 || 0) << endl; // gives false
    cout << "not(0) : " << (!0) << endl; // gives true
    cout << "not(1 or 0) : " << (!(1 || 0)) << endl; // gives false




    cout << "((7==7) and (7>5)) : " << ((7 == 7) && (7 > 5)) << endl; // gives true
    cout << "((7==7) and (7<5)) : " << ((7 == 7) && (7 < 5)) << endl; // gives false
    cout << "((7==7) or (7<5)) : " << ((7 == 7) || (7 < 5)) << endl; // gives true
    cout << "((7<7) or (7>5)) : " << ((7 < 7) || (7 > 5)) << endl; // gives true
    cout << "(not(7==7) and (7>5)) : " << (!(7 == 7) && (7 > 5)) << endl; // gives false
    cout << "((7==7) and not(7<5)) : " << ((7 == 7) && !(7 < 5)) << endl; // gives true



    cout << "((5>6) and (7==7)) or (1 or 0) : " << (((5 > 6) && (7 == 7)) || ((1 || 0))) << endl; // gives true
    cout << "(not((5>6) and (7==7)) or (1 or 0)) : " << (!((5 > 6) && (7 == 7)) || ((1 || 0))) << endl; // gives true
    cout << "(not((5>6) and (7==7)) or not(1 or 0)) : " << (!((5 > 6) && (7 == 7)) || (!(1 || 0))) << endl; // gives true
    cout << "(not((5>6) and (7==7)) and not(1 or 0)) : " << (!((5 > 6) && (7 == 7)) && (!(1 || 0))) << endl; // gives false
    cout << "(((5>6) and (7<=8)) or (8>1 and 4<=3) and true) : " << (((5 > 6) && (7 <= 8)) || ((8 > 1) && (4 <= 3)) && (1)) << endl; // gives false
    cout << "(((5>6) and not(7<=8)) and (8>1 or 4<=3) or true) : " << (((5 > 6) && !(7 <= 8)) && ((8 > 1) || (4 <= 3)) || (1)) << endl; // gives true
    
    return 0;
}