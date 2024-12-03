//? Factory Design Pattern -> The Factory Design Pattern is a creational design pattern used to create objects without specifying the exact class of the object that will be created. Instead of calling a constructor directly to create an object, the Factory pattern defines a method (called a factory method) that handles the creation of the object.
//* Think of a pizza restaurant. Instead of the customer specifying exactly how to prepare a pizza, they can just order a pizza by type (e.g., CheesePizza, VeggiePizza), and the restaurant's factory (kitchen) will decide how to make it and give it to the customer.


#include<bits/stdc++.h>
using namespace std;

//? virtual function means, if any class that inherit vehicle will have to implememt that function which i have created in Vehicle class 

class Vehicle {
    public:
        virtual void createVehicle() = 0;
};

class Car : public Vehicle {
    public:
        void createVehicle() {

        }
};

void Car::createVehicle() {
    cout << "Creating Car" << endl;
}


class Bike : public Vehicle {
    public:
        void createVehicle() {

        }
};

void Bike::createVehicle() {
    cout << "Creating Bike" << endl;
}