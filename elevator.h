#include <iostream>
//#include "Building.h"
using namespace std;

class Elevator  {
    public:
        Elevator(int numberOfFloors);
        void moveUp();
        void moveDown();
        void printElevator();
        void printCurrentFloor();
        void addRandom();

    private:
        int direction;
        int currentFloor;
        //int[numberOfFloors] pressedFloors;
}