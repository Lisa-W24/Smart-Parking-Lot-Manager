#include "ParkingLot.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

ParkingLot::ParkingLot(int capacity) : capacity(capacity) {}

bool ParkingLot::addVehicle(const Vehicle& v) {
    // placeholder logic for now
    return true;
}

bool ParkingLot::removeVehicle(const string& licensePlate) {
    // placeholder logic for now
    return true;
}

void ParkingLot::displayStatus() const {
    cout << "Parking lot status placeholder" << endl;
}

int ParkingLot::getAvailableSpaces() const {
    return capacity;
}
