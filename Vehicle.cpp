#include "Vehicle.h"

Vehicle::Vehicle(const string& licensePlate, const string& type)
    : licensePlate(licensePlate), type(type) {}

string Vehicle::getLicensePlate() const {
    return licensePlate;
}

string Vehicle::getType() const {
    return type;
}
