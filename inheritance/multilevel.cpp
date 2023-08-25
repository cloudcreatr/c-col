// program for demonstrating multilevel inheritance

#include <iostream>
using namespace std;

// Base class
class Vehicle {
   public:
    void drive() {
        cout << "Driving a vehicle..." << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
   public:
    void start() {
        cout << "Starting the car..." << endl;
    }
};

// Derived class 2
class SportsCar : public Car {
   public:
    void accelerate() {
        cout << "Accelerating the sports car..." << endl;
    }
};

int main() {
    SportsCar myCar;

    myCar.drive();
    myCar.start();
    myCar.accelerate();

    return 0;
}