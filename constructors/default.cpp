#include <iostream>

using namespace std;

class A {
    public:
        A() {
            cout << "Default constructor" << endl;
        }
};


int main () {
    A a;
    return 0;
}