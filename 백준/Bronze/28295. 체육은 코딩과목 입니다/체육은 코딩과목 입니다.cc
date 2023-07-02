#include <iostream>
using namespace std;

int main() {
    int directions[10]; 
    
    for (int i = 0; i < 10; i++) {
        cin >> directions[i];
    }

    int currentDirection = 0; 
    
    for (int i = 0; i < 10; i++) {
        if (directions[i] == 1) { 
            currentDirection = (currentDirection + 1) % 4;
        } else if (directions[i] == 2) { 
            currentDirection = (currentDirection + 2) % 4;
        } else if (directions[i] == 3) {
            currentDirection = (currentDirection + 3) % 4; 
        }
    }

    if (currentDirection == 0) {
        cout << "N";
    } else if (currentDirection == 1) {
        cout << "E";
    } else if (currentDirection == 2) {
        cout << "S";
    } else if (currentDirection == 3) {
        cout << "W";
    }

    return 0;
}