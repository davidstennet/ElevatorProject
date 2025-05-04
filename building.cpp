#include "building.h"
#include <iostream>
using namespace std;

class Building {
    private:
        int floors;
        Elevator elevator;
    
    public:
        Building(int numFloors) : floors(numFloors), elevator(numFloors) {}

        void clearScreen() {
            for (int i = 0; i < 50; ++i) cout << endl;
        }

        /*void simulate() {
            while (true) {
                clearScreen();
                elevator.printElevator();
                //elevator.move();
            }
        }*/
        
    };
