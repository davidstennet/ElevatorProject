#pragma once
#include <iostream>
using namespace std;

class Building {
    public:
        Building();
        Building(int floors);
    
        void simulate();  //handles moving elevator and user input
        void printStatus() ;
    
    protected:
        void clearScreen();
        int numberOfFloors;
};