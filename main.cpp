#include <iostream>
using namespace std;
#include "elevator.h"

// Test Comment
int main() {
    
    int numberOfFloors;
    cout << "How many floors does this building have? ";
    cin >> numberOfFloors;

    Elevator E1 = Elevator(numberOfFloors);
    bool inElevator = true;     // This variable reprsents that you are still in the elevator and the program still runs
    while (inElevator) {
        
    }

    return 0;
}