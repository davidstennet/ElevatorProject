#include <iostream>
#include "elevator.h"

using namespace std;

class Building {
    public:
        Building(int floors);
    
        void simulate();  //handles moving elevator and user input
        void printStatus() ;
    
    private:
        int numOfFloors;
        Elevator elevator;
    };