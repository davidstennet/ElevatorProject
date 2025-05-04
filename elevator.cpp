#include <iostream>
using namespace std;
#include "elevator.h"

// Constructor for Elevator
Elevator::Elevator() {
    numberOfFloors = 0;
    currentFloor = 0;
}

Elevator::Elevator(int floors) {
    numberOfFloors = floors;
    currentFloor = 1; // Default is the 1st floor
    pressedFloors = new int[numberOfFloors];
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
}

void Elevator::printCurrentFloor() {
    // Could be some edge cases here for character input
    char gettingOff;
    cout << "Are you getting off? (Y for yes N for no)" << endl;
    cin >> gettingOff;
}

// Method that increases the floor you are as long as you are not on the top floor
void Elevator::moveUp() {
    if (currentFloor == numberOfFloors) {
        cout << "Top floor reached cannot go any higher" << endl;
    }
    else {
        currentFloor++;
    }
}

// Method that decreases the floor you as long as you are not on the first floor
void Elevator::moveDown() {
    if (currentFloor == 1) {
        cout << "Ground floor reached cannot go any further" << endl;
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
        if (floorRequest != currentFloor && pressedFloors[floorRequest] == 0) {
            pressedFloors[floorRequest] = 1;  //Mark floor as requested

            string dir = (floorRequest > currentFloor) ? "down" : "up";
            cout << "Someone on floor " << floorRequest
                 << " pressed the button to go " << dir << "." << endl;
        }
    }
}


