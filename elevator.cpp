#include <iostream>
using namespace std;
#include "elevator.h"

// Constructor for Elevator
Elevator::Elevator() {
    numberOfFloors = 0;
    currentFloor = 0;
    direction = -1;
}

Elevator::Elevator(int floors) {
    numberOfFloors = floors;
    currentFloor = 1; // Default is the 1st floor
    direction = -1;
    pressedFloors = new int[numberOfFloors];

    // This loop initializes the pressedFloors array with 0 (meaning not visiting)
    pressedFloors[0] = 1;
    for (int i = 1; i < numberOfFloors; i++) {
        pressedFloors[i] = 0;
    }
}

Elevator::~Elevator() {
    delete[] pressedFloors;
}

void Elevator::printElevator() const{
    for (int floor = numberOfFloors; floor >= 1; --floor) {
        cout << floor << " | ";
        if (floor == currentFloor) {
            cout << "[Elevator]";
        }
        cout << endl;
    }
    cout << endl;
}

int Elevator::floorMenu() {
    int option;
    cout << "----------------------------------" << endl;
    cout << "Enter 1, 2, or 3 depending on your desired input" << endl;
    cout << "1. Get off" << endl;
    cout << "2. Press a floor" << endl;
    cout << "3. Close Doors (Proceed to next floor)" << endl;
    cin >> option;

    return option;
}

// Method that increases the floor you are as long as you are not on the top floor
void Elevator::moveUp() {
    if (currentFloor == numberOfFloors) {
        cout << "Top floor reached cannot go any higher" << endl;
        direction = 0;
    }
    else {
        currentFloor++;
    }
}

// Method that decreases the floor you as long as you are not on the first floor
void Elevator::moveDown() {
    if (currentFloor == 1) {
        cout << "Ground floor reached cannot go any further" << endl;
        direction = 1;
    }
    else {
        currentFloor--;
    }
}

void Elevator::addRandom() {
    stepCounter++;  

    if (stepCounter % 3 == 0) {  //Every 3 steps
        int floorRequest = rand() % numberOfFloors + 1;  

        //Check if it's not the current floor & hasnt already been requested
        if (floorRequest != currentFloor && pressedFloors[floorRequest-1] == 0) {
            pressedFloors[floorRequest-1] = 1;  //Mark floor as requested

            string dir = (floorRequest > currentFloor) ? "down" : "up";
            cout << "Someone on floor " << floorRequest
                 << " pressed the button to go " << dir << "." << endl;
        }
    }
}

bool Elevator::isFloorsAbove(int floor) {
    for (int i = floor; i < numberOfFloors; i++) {
        if (pressedFloors[i] == 1) {
            return true;
        }
    }
    return false;
}

bool Elevator::isFloorsBelow(int floor) {
    for (int i = floor-2; i >= 0; i--) {
        if (pressedFloors[i] == 1) {
            return true;
        }
    }
    return false;
}

bool Elevator::isCurrentFloorPressed(int floor) {
    if (pressedFloors[floor-1] == 1) {
        return true;
    }
    else {
        false;
    }
}

void Elevator::removeFloor(int floor) {
    pressedFloors[floor-1] = 0;
}

void Elevator::pressFloor(int floor) {
    pressedFloors[floor-1] = 1;
}

void Elevator::setDirection(int direction) {
    this->direction = direction;
} 

int Elevator::getDirection() const {
    return direction;
}

int Elevator::getCurrentFloor() const {
    return currentFloor;
}



