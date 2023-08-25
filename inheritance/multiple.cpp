// program for demonstrating multiple inheritance

#include <iostream>
using namespace std;


// Base class 1
class Shape
{
public:
    int width;
    int height;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

// Base class 2
class Paint
{
public:
    string color;
    void setColor(string c)
    {
        color = c;
    }
};

// Derived class
class Rectangle : public Shape, public Paint
{
public:
    int getArea()
    {
        return (width * height);
    }
    string getColor()
    {
        return color;
    }
};

int main()
{
    Rectangle rect;

    rect.setWidth(5);
    rect.setHeight(7);
    rect.setColor("red");

    // Print the area of the object.
    cout << "Total area: " << rect.getArea() << endl;
    cout << "Color: " << rect.getColor() << endl;

    return 0;
}