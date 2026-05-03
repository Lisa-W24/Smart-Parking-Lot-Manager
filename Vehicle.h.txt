#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using std::string;

class Vehicle {
private:
    string licensePlate;
    string type;

public:
    Vehicle(const string& licensePlate, const string& type);
    string getLicensePlate() const;
    string getType() const;
};

#endif
