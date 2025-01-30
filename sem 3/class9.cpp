#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void displayVehicle() {
        cout << "This is a Vehicle" << endl;
    }
};

// Intermediate base class 1 inheriting from Vehicle
class Car : public Vehicle {
public:
    void displayCar() {
        cout << "This is a Car" << endl;
    }
};

// Intermediate base class 2 inheriting from Vehicle
class Bike : public Vehicle {
public:
    void displayBike() {
        cout << "This is a Bike" << endl;
    }
};

// Derived class inheriting from both Car and Bike
class HybridVehicle : public Car, public Bike {
public:
    void displayHybrid() {
        cout << "This is a Hybrid Vehicle combining Car and Bike" << endl;
    }
};

int main() {
    HybridVehicle hv;

    // Accessing methods from various classes
    // hv.Car::displayVehicle(); // Resolving ambiguity
    // hv.Bike::displayVehicle(); // Resolving ambiguity
    hv.displayCar();
    hv.displayBike();
    hv.displayHybrid();

    return 0;
}
