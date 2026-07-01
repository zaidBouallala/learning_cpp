#include <iostream>
using namespace std;


void readArrayData(int arr[100], int &length){
    cout << "Enter the length of the array (max 100): ";
    cin >> length;
    for(int i =0 ;i<= length-1;i++){
        cout << "Enter the value of arr[" << i << "]: ";
        cin >> arr[i];
    }
}

void printArrayData(int arr[100], int length){
    for(int i = 0; i < length; i++){
        cout << "The value of arr[" << i << "] is: " << arr[i] << endl;
    }
    
}

int calcualteArraySum(int arr[100], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += arr[i];
    }
    return sum;
}

float calculateArrayAverage(int arr[100], int length){
    int sum = calcualteArraySum(arr, length);
    return (float)sum / length;
}



int main()
{

    int arr[100];
    int length;
    readArrayData(arr, length);
    printArrayData(arr, length);

    int sum = calcualteArraySum(arr, length);
    float average = calculateArrayAverage(arr, length);

    cout << "The sum of the array is: " << sum << endl;
    cout << "The average of the array is: " << average << endl;

    return 0;

}