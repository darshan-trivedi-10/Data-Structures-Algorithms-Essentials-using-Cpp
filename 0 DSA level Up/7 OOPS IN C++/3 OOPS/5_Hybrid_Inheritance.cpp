//  Hirarchical Inheritance

#include <iostream>
using namespace std;

class Vehicle
{
private:
    int maxSpeed;

protected:
    int numTyres;

public:
    string color;
    Vehicle()
    {
        cout << "Vehicle default Constructor\n";
    }

    ~Vehicle()
    {
        cout << "Vehicle default Destructor\n ";
    }

    Vehicle(int maxSpeed)
    {
        cout << "Vehicle Parametrized Constructor\n";
        this->maxSpeed = maxSpeed;
    }
    void print()
    {
        cout << "Vehical Print Function\n";
    }
};

class car : virtual public Vehicle
{
public:
    int numGears;
    car()
    {
        cout << "Car default Constructor\n";
    }
    car(int x) : Vehicle(x)
    {
        cout << "Car Parametrized Constructor\n";
    }

    void print()
    {
        cout << "\n\nCar Print Function\n\n";
    }

    ~car()
    {
        cout << "Car default Destructor\n ";
    }
};

class Truck : virtual public Vehicle
{
public:
    Truck()
    {
        cout << "Truck Constructor\n";
    }
};

class Bus : public car, public Truck
{
public:
    Bus()
    {
        cout << "Bus Constructor\n";
    }
    void print()
    {
        cout << "\n\nBus Print Function\n\n";
    }
};

int main()
{
    Bus b;
    // b.car::print();
}
