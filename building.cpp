#include "building.h"
#include <iostream>
using namespace std;


Building::Building(int floors)
    : numOfFloors(floors), elevator(floors) {}
        
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
        
    
