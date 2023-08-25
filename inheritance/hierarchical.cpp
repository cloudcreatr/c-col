// program for demonstrating hierarchical inheritance

#include <iostream>
using namespace std;

class animal {
   public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class dog: public animal {
    public:

    void bark() {
        cout << "Barking..." << endl;
    }
};

class cat: public animal {
    public:
    void meow() {
        cout << "Meowing..." << endl;
    }
};

int main (){
    dog d1;
    cat c1;
   

    d1.eat();
    d1.bark();
    

    c1.eat();
    c1.meow();

    return 0;
}