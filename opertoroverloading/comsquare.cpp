// overloading  overloading comparing square for a class

#include <iostream>
using namespace std;

class Square {
public:
    int side;

    Square(int s)  {
        side = s;
    }

    bool operator>( Square other) {
        return side*side > other.side*other.side;
    }
};

int main () {
    Square sq1(5), sq2(10);

    if (sq1 > sq2) {
        cout << "sq1 is bigger than sq2" << endl;
    } else {
        cout << "sq2 is bigger than sq1" << endl;
    }

    return 0;
}