#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int reandomNumber(int min, int max){
    return rand() % (max - min + 1) + min;
}


void print(){
    
        cout << reandomNumber(0, 9) << endl;
        cout << reandomNumber(0, 9) << endl;
        cout << reandomNumber(0, 9) << endl;
  
}
int main()
{ 
    srand((unsigned)time(NULL));


    print();

    return 0;
}