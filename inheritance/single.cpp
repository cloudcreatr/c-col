// program for demonstrating single inheritance

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void display_a()
    {
        cout << "a = " << a << endl;
    }
};
class B : public A
{
public:
    void set_a(int num)
    {
        a = num;
    }
    void display_b()
    {
        cout << "a from b = " << a << endl;
    }
};


int main()
{
    B obj;
    obj.set_a(10);
    obj.display_a();
    obj.display_b();
    return 0;
}