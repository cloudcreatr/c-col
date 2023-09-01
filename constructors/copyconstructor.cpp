// copy constructor demo

#include <iostream>
using namespace std;

class A
{

public:
    int data = 0;
    A()
    {
        cout << "Default constructor" << endl;
    }
    A(const A &obj)
    {
        cout << "Copy constructor" << endl;
        data = obj.data;
    }
    void get_a()
    {
        cout << "data value is " << data << endl;
    }
};

int main()
{
    A a;
    a.data = 5;
    A b = a;
    b.get_a();
    return 0;
}