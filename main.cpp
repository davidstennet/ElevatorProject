#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
#include "elevator.h"

// Test Comment
int main() {
    
    int numberOfFloors;
    bool inElevator = true;     // This variable reprsents that you are still in the elevator and the program still runs
    cout << "How many floors does this building have? ";
    cin >> numberOfFloors;

    Elevator E1 = Elevator(numberOfFloors);
    

    // This while loop is the simulation loop
    cout << "Welcome to the building elevator!!" << endl;
    while (inElevator) {

        // Simualates the elevator going up or down
        if (E1.getDirection() == 1) {
            E1.moveUp();
            E1.addRandom();
            E1.printElevator();
            this_thread::sleep_for(chrono::seconds(2));
        }
        else if (E1.getDirection() == 0) {
            E1.moveDown();
            E1.addRandom();
            E1.printElevator();
            this_thread::sleep_for(chrono::seconds(2));
        }


        // This while loop represents the simulation for if the door has arrived at a floor
        bool notMoving = true;
        if (E1.isCurrentFloorPressed(E1.getCurrentFloor())) {
            cout << "Floor Reached!!" << endl;
            while (notMoving) {
                int result = E1.floorMenu();
                if (result == 1) {
                    cout << "Have a great day!!" << endl;
                    inElevator = false;
                    notMoving = false;
                }
                else if (result == 2) {
                    int pressedFloor;
                    cout << "Enter the floor you want to go to: ";
                    cin >> pressedFloor;
                    E1.pressFloor(pressedFloor);
                     
                    if (E1.getDirection() == -1) {
                        E1.setDirection(1);
                    }
                }
                else {
                    cout << "Closing doors and proceeding" << endl;
                    cout << "----------------------------------" << endl;
                    E1.removeFloor(E1.getCurrentFloor());
                    notMoving = false;

                    // Delay after doors close
                    this_thread::sleep_for(chrono::seconds(2));
                    E1.printElevator();
                    this_thread::sleep_for(chrono::seconds(2));
                }
            }

        }


        // Decides when the elevator will change direction
        if (E1.getDirection() == 1 && !E1.isFloorsAbove(E1.getCurrentFloor())) {
            E1.setDirection(0);
        }
        else if (E1.getDirection() == 0 && !E1.isFloorsBelow(E1.getCurrentFloor())) {
            E1.setDirection(1);
        }
    }

    return 0;
}