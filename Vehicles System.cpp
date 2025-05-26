#include <iostream>
using namespace std;

class Vehicle {
public:

    virtual void move() = 0;


    void getType() { cout << "I am a Vehicle\n"; }

    
    virtual ~Vehicle() { cout << "Vehicle Destroyed\n"; }
};


class Car : public Vehicle {
public:
    void move() override {
        cout << "Car is driving on the road\n";
    }

    ~Car() { cout << "Car Destroyed\n"; }
};


class Bicycle : public Vehicle {
public:
    void move() override {
        cout << "Bicycle is pedaling on the path\n";
    }

    ~Bicycle() { cout << "Bicycle Destroyed\n"; }
};

int main() {


    Vehicle *v1 = new Car; 
    Vehicle *v2 = new Bicycle;

    v1->getType(); // I am a Vehicle
    v1->move();    // Car is driving on the road

    v2->getType(); // I am a Vehicle
    v2->move();    // Bicycle is pedaling on the path

    delete v1; // Car Destroyed, Vehicle Destroyed
    delete v2; // Bicycle Destroyed, Vehicle Destroyed

    return 0;
}