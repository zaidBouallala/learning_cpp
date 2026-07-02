#include <iostream>
#include <string>
using namespace std;


// #2-#1 
string readName(){
    string name;
    cout << "Please enter your name? " << endl;
    getline(cin, name);
    return name;
}
// #1
void printName(string name){
    cout << "\n Your Name is: " << name << endl;
}

// #3
enum enNumberType {odd, even};

enNumberType checkNumberType(int n)
{
    int remainder = n % 2;
    if(remainder == 0){
        return enNumberType::even;
    }
    else{
        return enNumberType::odd;
    }
}

int readNumber(){
    int n;
    cout << "Please enter your number? " << endl;
    cin >> n;
    return n;

}


void printNumberType(enNumberType numberType){
    if(numberType == enNumberType::even){
        cout << "Your number is even" << endl;
    }
    else{
        cout << "Your number is odd" << endl;
    }
}


// #4-#5
struct stInfo{
    int age;
    bool hasDrivingLicense;
    bool hasRecommendation;
};

stInfo readInfo(){
    
    stInfo info;
    cout << "Please enter your age? " << endl;
    cin >> info.age;
    cout << "Do you have a driving license? (1 for Yes, 0 for No) " << endl;
    cin >> info.hasDrivingLicense;
    cout << "Do you have a recommendation? (1 for Yes, 0 for No) " << endl;
    cin >> info.hasRecommendation;
    return info;
}

bool isAccepted(stInfo info){
    if(info.hasRecommendation){
        return true;
    }
    else{
        return (info.age > 21 && info.hasDrivingLicense);
    }
}

void printResult(stInfo info){
    if(isAccepted(info)){
        cout << "You are accepted" << endl;
    }
    else{
        cout << "You are not accepted" << endl;
    }
}


// #6

struct stInfo2{
    string firstName;
    string lastName;
};
stInfo2 readInfo2(){
    
    stInfo2 info;
    cout << "Please enter your first name? " << endl;
    cin >> info.firstName;
    cout << "Please enter your last name? " << endl;
    cin >> info.lastName;
    return info;
}

string getFullName(stInfo2 info,bool reverse = false){
    string fullName;
    if(reverse)
        fullName = info.lastName + " " + info.firstName;
    else
        fullName = info.firstName + " " + info.lastName;
    return fullName;
}


void printFullName(string fullName){
    cout << "Your full name is: " << fullName << endl;
}


// #7
float calculateHalfNumber(int n){
    return (float) n / 2;
}

void printHalfNumber(int n){
    string result = "Half of " + to_string(n) + " is: " + to_string(calculateHalfNumber(n));
    cout << result << endl;
}



// #8

enum enPassFail {pass, fail};
int readMark(){
    
    int mark;
    cout << "Please enter your mark? " << endl;
    cin >> mark;
    return mark;
}

enPassFail checkMark(int mark){
    if(mark >= 50)
        return enPassFail::pass;
    else
        return enPassFail::fail;
}
void printResults(int mark){
    
    if(checkMark(mark) == enPassFail::pass)
        cout << "You passed the exam" << endl;
    else
        cout << "You failed the exam" << endl;
}


// #9 
int readThreeNumbers(int&num1, int & num2, int& num3){
    cout << "Please enter three numbers separated by space? " << endl;
    cin >> num1 >> num2 >> num3;
    return 0;
}

int sumOfThreeNumbers(int num1, int num2, int num3){
    return num1 + num2 + num3;
}  

void printSumOfThreeNumbers(int num1, int num2, int num3){
    cout << "The sum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << sumOfThreeNumbers(num1, num2, num3) << endl;
}

// #10

float calculateAverage(int num1, int num2, int num3){
    return (float)(num1 + num2 + num3) / 3;
}

void printR(float avg){
    cout << "The average is: " << avg << endl;
    if(checkMark(avg) == enPassFail::pass)
        cout << "You passed the exam" << endl;
    else
        cout << "You failed the exam" << endl;
}

// #12 
void readtwoNumbers(int& num1, int& num2){
    cout << "Please enter two numbers separated by space? " << endl;
    cin >> num1 >> num2;
}

int maxOfTwoNumbers(int num1, int num2){
    return (num1 > num2) ? num1 : num2;
}
void printMaxOfTwoNumbers(int maxOfTwoNumber){
    cout << "The maximum of the two numbers is: " << maxOfTwoNumber << endl;
}

// #13

void read3Numbers(int& num1, int& num2, int& num3){
    cout << "Please enter three numbers separated by space or enter? " << endl;
    cin >> num1 >> num2 >> num3;
}

int maxOfThreeNumbers(int num1, int num2, int num3){
    // int max = num1;
    // if (num2 > max)
    //     max = num2;
    // if (num3 > max)
    //     max = num3;
    // return max;
    if(num1 > num2)
    if (num1 >num3)
    return num1;
    else
    return num3;
    else
    if(num2>num3)
    return num2;
    else 
    return num3;
}
void printMaxOfThreeNumbers(int maxOfThreeNumber){
    cout << "The maximum of the three numbers is: " << maxOfThreeNumber << endl;
}


// #14
void  read2Numbers(int& num1, int& num2){
    cout << "Please enter two numbers separated by space or enter? " << endl;
    cin >> num1 >> num2;
}
void swapNumbers(int& num1, int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void printNumbers(int num1, int num2){
   cout << "the numbers is : " << "num1 = " << num1 << ", num2 = " << num2 << endl;
}

float calculateRectangleArea(float length, float width){
    return length * width;
}

void printRectangleArea(float area){
    cout << "The area of the rectangle is: " << area << endl;
}


int main()
{
    // printName(readName());
    // printNumberType(checkNumberType(readNumber()));
    // printResult(readInfo());
    // printFullName(getFullName(readInfo2(),true));
    // printHalfNumber(readNumber());
    // #11
    // printResults(readMark());

    // int num1, num2, num3;
    // readThreeNumbers(num1, num2, num3);
    // printSumOfThreeNumbers(num1, num2, num3);
    // printR(calculateAverage(num1, num2, num3));

    // int num1, num2 , num3;
    // read3Numbers(num1, num2, num3);
    // printMaxOfThreeNumbers(maxOfThreeNumbers(num1, num2, num3));

    int num1, num2;
    read2Numbers(num1, num2);
    printNumbers(num1, num2);
    // swapNumbers(num1, num2);
    // printNumbers(num1, num2);

    printRectangleArea(calculateRectangleArea(num1, num2));

    return 0;
} 