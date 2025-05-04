#include "building.h"
#include <iostream>
using namespace std;

// Default constructor
Building::Building() 
    : numberOfFloors(0) {}

Building::Building(int floors) 
    : numberOfFloors(floors) {}
        
void Building::clearScreen() {
    for (int i = 0; i < 50; ++i) cout << endl;
}

/*void Building::simulate() {
    while (true) {
        clearScreen();
        elevator.printElevator();
        //elevator.move();
     }
 }*/
        
    
