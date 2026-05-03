#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
using namespace std;

int main() {
    ParkingLot lot(10);
    int choice;

    while (true) {
        cout << "\nSmart Parking Lot Manager\n";
        cout << "1. Add Vehicle\n";
        cout << "2. Remove Vehicle\n";
        cout << "3. Display Status\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string plate, type;
            cout << "Enter license plate: ";
            cin >> plate;
            cout << "Enter vehicle type: ";
            cin >> type;

            Vehicle v(plate, type);
            lot.addVehicle(v);
        }
        else if (choice == 2) {
            string plate;
            cout << "Enter license plate to remove: ";
            cin >> plate;

            lot.removeVehicle(plate);
        }
        else if (choice == 3) {
            lot.displayStatus();
        }
        else if (choice == 4) {
            cout << "Exiting program..." << endl;
            break;
        }
        else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
