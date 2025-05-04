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

    }

    return 0;
}