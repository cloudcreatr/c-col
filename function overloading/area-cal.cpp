// function to calculate different area

#include <iostream>
using namespace std;

int area(int num1, int num2)
{
    // area of rectangle
    return num1 * num2;
}


double area(double num1)
{
    // area of circle
    return 3.14 * num1 * num1;
}

int area(int num1)
{ // area of square

    return num1 * num1;
}

int main()
{
    int num1, num2;
    double radius;
    cout << "Enter the length and breadth of rectangle: ";
    cin >> num1 >> num2;
    cout << "Area of rectangle is: " << area(num1, num2) << endl;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    cout << "Area of circle is: " << area(radius) << endl;
    cout << "Enter the side of square: ";
    cin >> num1;
    cout << "Area of square is: " << area(num1) << endl;
    return 0;
}
