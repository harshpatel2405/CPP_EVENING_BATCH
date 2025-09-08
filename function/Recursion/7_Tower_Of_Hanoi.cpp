#include <iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination, int &count) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        count++;  // Increment move count
        return;
    }

    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary, count);

    // Move nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    count++;  // Increment move count

    // Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination, count);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    int moveCount = 0; // Initialize counter
    cout << "Moves to solve Tower of Hanoi:\n";
    towerOfHanoi(n, 'A', 'B', 'C', moveCount); // A=source, B=auxiliary, C=destination

    cout << "\nTotal moves taken: " << moveCount << endl;

    return 0;
}
