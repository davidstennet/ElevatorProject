#include <iostream>
#include <vector>
using namespace std;
#include "elevator.h"

// Test Comment
int main() {
    
    int numberOfFloors;
    bool inElevator = true;     // This variable reprsents that you are still in the elevator and the program still runs
    cout << "How many floors does this building have? ";
    cin >> numberOfFloors;

    Elevator E1 = Elevator(numberOfFloors);
    

    // This while loop 
    while (inElevator) {
        E1.addRandom();
        E1.printElevator();

        if (E1.getDirection() == 1) {
            E1.moveUp();
        } else {
            E1.moveDown();
        }

        char keepGoing;
        cout << "Continue simulation? (Y/N): ";
        cin >> keepGoing;
        if (toupper(keepGoing) == 'N') {
            inElevator = false;
        }
    }

    return 0;
}