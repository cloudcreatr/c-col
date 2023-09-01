// parameterizzed constuctor

#include <iostream>

using namespace std;

class A
{
public:
    A(int x)
    {
        cout << "Parameterized constructor " << x << endl;
    }
};

int main()
{
    A a(5);
    return 0;
}
