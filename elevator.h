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
        void printCurrentFloor();
        void addRandom();

    private:
        int direction;
        int currentFloor;
        int* pressedFloors; // Represnts a pointer to an array for what floors are pressed
};