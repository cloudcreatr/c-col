// function overloading using different number of arguments

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
    return 0;
}
