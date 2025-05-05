#include <iostream>
#include <vector>
#include "building.h"
using namespace std;

class Elevator : public Building {
    public:
        Elevator();
        Elevator(int floors);
        ~Elevator();
        void moveUp();
        void moveDown();
        void printElevator() const;
        int floorMenu();
        void addRandom();
        bool isCurrentFloorPressed(int floor);
        bool isFloorsAbove(int floor);
        bool isFloorsBelow(int floor);
        void pressFloor(int floor);
        void removeFloor(int floor);
        
        int getDirection() const;
        int getCurrentFloor() const;
        void setDirection(int direction);

    private:
        int direction;      // 1 for up, 0 for down, 2 for idle
        int currentFloor;
        int* pressedFloors; // Represnts a pointer to an array for what floors are pressed
        int stepCounter = 0;
};