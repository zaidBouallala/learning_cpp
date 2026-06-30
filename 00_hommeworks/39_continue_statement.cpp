#include <iostream>
using namespace std;


void readFiveNumbers(int arr[5]){
    for(int i=0;i<5;i++){
        cout << "Enter number " << (i+1) << ": ";
        cin >> arr[i];
    }
}

int sumFiveNumbers(int arr[5]){
    int sum = 0;
    for(int i=0;i<5;i++){
        if(arr[i]> 50){
            continue; // Skip numbers greater than 50

        }
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int numbers[5];
    readFiveNumbers(numbers);

    int sum = sumFiveNumbers(numbers);
    cout << "Sum of numbers (excluding those greater than 50): " << sum << endl;
    return 0;
}