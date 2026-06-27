#include <iostream>
using namespace std;

enum Color {Red=100, Green=200, Yellow=300, Blue=400};
enum Direction {North=1, South=2, East=3, West=4};
enum Week {Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7};
enum Gender {Male=1, Female=2};
enum Status {Single=1, Married=2};


int main()
{
    Color myColor;
    Direction myDirection;
    Week today;
    Status myStatus;


    myColor = Color::Yellow;

    myDirection = Direction::North; 

    today = Week::Thu;


    myStatus = Status::Single;
    


    return 0;


}

