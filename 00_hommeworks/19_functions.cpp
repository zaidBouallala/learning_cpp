#include <iostream>
#include <cmath>
using namespace std;

// #1 print name without reading it
void printName(string name = "zaid bouallala"){
    cout << "My name is : " << name << endl;
}

// 2# read name and print it 
void readAndPrintName(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "My name is : " << name << endl;
}


// 14# swap 2 numbers
void swapnumbers(int x, int y){
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "After swapping: x = " << x << ", y = " << y << endl;
}


// 15# calculate rectangle area
void rectangleArea(float length, float width){
    float area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
}

// 16#  calculate RECTANGLE area using diagonal and side 
void rectangleAreaFromDiagonalAndSide(float diagonal, float side){
    float area = 0.5 * diagonal * side;
    cout << "The area of the rectangle is: " << area << endl;
}



//#18 (Circle Area via Radius): Write a program to calculate the area of a circle given its radius.
void circleAreaFromRadius(float radius){
    const float PI = 3.14159;
    float area = PI * pow(radius, 2);
    cout << "The area of the circle is: " << area << endl;
}

//#19 (Circle Area via Diameter): Write a program to calculate the area of a circle given its total diameter.
void circleAreaFromDiameter(float diameter){
    float radius = diameter / 2;
    const float PI = 3.14159;
    float area = PI * pow(radius, 2);
    cout << "The area of the circle is: " << area << endl;
}

//#20 (Circle Area Inscribed in a Square): Write a program to calculate the area of a circle that is perfectly inscribed inside a square.
void circleAreaInscribedInSquare(float side){
    float radius = side / 2;
    const float PI = 3.14159;
    float area = PI * pow(radius, 2);
    cout << "The area of the inscribed circle is: " << area << endl;
}

//#21 (Circle Area via Circumference): Write a program to calculate the area of a circle given its total circumference length.
void circleAreaFromCircumference(float circumference){
    const float PI = 3.14159;
    float radius = circumference / (2 * PI);
    float area = PI * pow(radius, 2);
    cout << "The area of the circle is: " << area << endl;
}

//#22 (Circle Area Inscribed in an Isosceles Triangle): Write a program to calculate the area of a circle inscribed inside an isosceles triangle.
void circleAreaInscribedInIsoscelesTriangle(float base, float equalSides){
   
    float semiPerimeter = (base + 2 * equalSides) / 2;
    float areaTriangle = sqrt(semiPerimeter * (semiPerimeter - base) * (semiPerimeter - equalSides) * (semiPerimeter - equalSides));
    float radiusInscribed = areaTriangle / semiPerimeter;
    float areaCircle = 3.14159 * pow(radiusInscribed, 2);
    cout << "The area of the inscribed circle is: " << areaCircle << endl;
}

//#23 (Circle Area Around an Arbitrary Triangle): Write a program to calculate the area of a circle circumscribed around an arbitrary triangle with three given sides.
void circleAreaCircumscribedAroundTriangle(float side1, float side2, float side3){
    // Implementation for circle area circumscribed around a triangle
    float semiPerimeter = (side1 + side2 + side3) / 2;
    float areaTriangle = sqrt(semiPerimeter * (semiPerimeter - side1)
    * (semiPerimeter - side2) * (semiPerimeter - side3));
    float radiusCircumscribed = (side1 * side2 * side3) / (4 * areaTriangle);
    float areaCircle = 3.14159 * pow(radiusCircumscribed, 2);
    cout << "The area of the circumscribed circle is: " << areaCircle << endl;  
}

int main()
{
    // Example usage of the functions
    printName();
    readAndPrintName();
    swapnumbers(5, 10);
    rectangleArea(4.0, 5.0);
    rectangleAreaFromDiagonalAndSide(5.0, 3.0);
    circleAreaFromRadius(3.0);
    circleAreaFromDiameter(6.0);
    circleAreaInscribedInSquare(4.0);
    circleAreaFromCircumference(18.85);
    circleAreaInscribedInIsoscelesTriangle(4.0, 5.0);
    circleAreaCircumscribedAroundTriangle(3.0, 4.0, 5.0);

    return 0;
}
