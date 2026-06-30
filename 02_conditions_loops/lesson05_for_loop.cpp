#include <iostream>
using namespace std;


int main()
{
    /*
    for (initialization; condition; increment/decrement) {
        // code to be executed in each iteration
    }
        example :
        for (int i = 0; i < 5; i++) {
            cout << "Iteration " << i + 1 << endl;
        }   
        
    
    */
   for(int i = 1 ;i<=5;i++)
   {
    
    cout << "Iteration " << i << endl;
   }
   cout << "________________________________________" << endl;
   for(int i = 5 ;i>=1;i--)
   {
    cout << "Iteration " << i << endl;
   }
   cout << "________________________________________" << endl;

   for(int i = 1 ;i<=10;i+=2)
   {
    
    cout << "Iteration " << i << endl;
   }
   cout << "________________________________________" << endl;
   for(int i = 0 ;i<=10;i+=2)
   {
    
    cout << "Iteration " << i << endl;
   }
   cout << "________________________________________" << endl;

    return 0; 
}