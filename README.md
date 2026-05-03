# Smart-Parking-Lot-Manager
A C++ project that simulates a Smart Parking Lot Manager using object-oriented programming. The program tracks parked vehicles, available spaces, and supports adding, removing, and displaying parking lot status. Created for my course project to demonstrate class design, member functions, and structured input/output.

## How to Run the Program

### Compilation
Use a C++ compiler such as g++ to compile all source files:

g++ main.cpp ParkingLot.cpp Vehicle.cpp -o parking

### Running the Program
After compiling, run the executable:

./parking

### Program Usage
Once the program starts, you can:

- Add a vehicle by entering its license plate
- Remove a vehicle by entering its license plate
- Display the current parking lot status
- See available and occupied spaces update automatically

### Requirements
- C++ compiler (g++, clang++, or Visual Studio Build Tools)
- C++11 or later
- Standard library support for vector, string, and iostream

Smart-Parking-Lot-Manager/
│
├── main.cpp
├── ParkingLot.cpp
├── ParkingLot.h
├── Vehicle.cpp
├── Vehicle.h
│
├── README.md
└── LICENSE

Parking Lot Status:
Occupied Spaces: 1
Available Spaces: 4

Vehicle LHW240 added successfully.

Parking Lot Status:
Occupied Spaces: 2
Available Spaces: 3

Vehicle LHW240 removed successfully.



