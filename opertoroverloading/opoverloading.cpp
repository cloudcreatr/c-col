//  overloading of unary operator for a class

#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    MyClass(int val = 0) {
        value = val;
    }

    

    MyClass operator-() {
        return MyClass(-value);
    }
};

int main () {
    MyClass obj1(10), obj2(-20);

    obj1 = -obj1;
    obj2 = -obj2;

    cout << "obj1.value: " << obj1.value << endl;
    cout << "obj2.value: " << obj2.value << endl;

    return 0;
}