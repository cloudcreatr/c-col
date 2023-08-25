// program for demostraing hybrid inheritance

#include <iostream>
using namespace std;

class A
{
public:
    void display_a()
    {
        cout << " i am from class A" << endl;
    }
};

class B : virtual public A
{
public:
    void display_b()
    {
        cout << " i am from class B" << endl;
    }
};

class C : virtual public A
{
public:
    void display_c()
    {
        cout << " i am from class C" << endl;
    }
};

class D : public B, public C
{
public:
    void display_d()
    {
        cout << " i am from class D" << endl;
    }
};

int main()
{
    D obj;
    obj.display_a();
    obj.display_b();
    obj.display_c();
    obj.display_d();
}