#include "ParkingLot.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

ParkingLot::ParkingLot(int capacity) : capacity(capacity) {}

bool ParkingLot::addVehicle(const Vehicle& v) {
    // Check if lot is full
    if (vehicles.size() >= capacity) {
        cout << "Parking lot is full. Cannot add vehicle.\n";
        return false;
    }

    // Add vehicle
    vehicles.push_back(v);
    cout << "Vehicle " << v.getLicensePlate() << " added successfully.\n";
    return true;
}

bool ParkingLot::removeVehicle(const string& licensePlate) {
    for (size_t i = 0; i < vehicles.size(); i++) {
        if (vehicles[i].getLicensePlate() == licensePlate) {
            vehicles.erase(vehicles.begin() + i);
            cout << "Vehicle " << licensePlate << " removed successfully.\n";
            return true;
        }
    }

    cout << "Vehicle not found.\n";
    return false;
}

void ParkingLot::displayStatus() const {
    cout << "\n--- Parking Lot Status ---\n";
    cout << "Total spaces: " << capacity << endl;
    cout << "Occupied: " << vehicles.size() << endl;
    cout << "Available: " << capacity - vehicles.size() << endl;

    if (vehicles.empty()) {
        cout << "No vehicles currently parked.\n";
    } else {
        cout << "Vehicles currently parked:\n";
        for (const auto& v : vehicles) {
            cout << "- " << v.getLicensePlate() 
                 << " (" << v.getType() << ")\n";
        }
    }

    cout << "---------------------------\n\n";
}

int ParkingLot::getAvailableSpaces() const {
    return capacity - vehicles.size();
}
