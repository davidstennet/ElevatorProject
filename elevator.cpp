#include "elevator.h"

Elevator::Elevator(int floors) {
    // Add number for floors from inherited class
}

void Elevator::moveUp() {

}

void Elevator::moveDown() {

}

void Elevator::printElevator() const{
    for (int floor = numberOfFloors; floor >= 1; --floor) {
        cout << floor << " | ";
        if (floor == currentFloor) {
            cout << "[Elevator]";
        }
        cout << endl;
    }
}

void Elevator::printCurrentFloor() {

}

