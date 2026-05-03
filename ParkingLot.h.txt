#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include "Vehicle.h"
using std::vector;

class ParkingLot {
private:
    int capacity;
    vector<Vehicle> vehicles;

public:
    ParkingLot(int capacity);
    bool addVehicle(const Vehicle& v);
    bool removeVehicle(const std::string& licensePlate);
    void displayStatus() const;
    int getAvailableSpaces() const;
};

#endif
