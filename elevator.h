#include <iostream>
#include "building.h"
using namespace std;

class Elevator : public Building {
    public:
        Elevator();
        Elevator(int floors);
        void moveUp();
        void moveDown();
        void printElevator() const;
        void printCurrentFloor();
        void addRandom();

    private:
        int direction;
        int currentFloor;
        //int[numberOfFloors] pressedFloors;
};