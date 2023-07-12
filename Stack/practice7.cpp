#include <iostream>
#include <stack>
using namespace std;

// Function to solve the Tower of Hanoi problem
// n: number of disks
// from_rod: stack representing the source rod
// to_rod: stack representing the destination rod
// aux_rod: stack representing the auxiliary rod
void towerOfHanoi(int n, stack<int>& from_rod, stack<int>& to_rod, stack<int>& aux_rod)
{
    // Base case: If there are no disks to move, return
    if (n == 0) {
        return;
    }

    // Move n-1 disks from the source rod to the auxiliary rod,
    // using the destination rod as the temporary rod
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    // Move the largest disk from the source rod to the destination rod
    int disk = from_rod.top();
    from_rod.pop();
    to_rod.push(disk);

    // Print the move
    cout << "Move disk " << disk << " from rod " << &from_rod << " to rod " << &to_rod << endl;

    // Move the remaining n-1 disks from the auxiliary rod to the destination rod,
    // using the source rod as the temporary rod
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int N = 3;

    // Create three stacks to represent the three rods
    stack<int> rod_A, rod_B, rod_C;

    // Initialize the source rod (rod A) with disks in descending order
    for (int i = N; i > 0; --i) {
        rod_A.push(i);
    }

    // Call the towerOfHanoi function to solve the problem
    // Move N disks from rod A to rod C using rod B as the auxiliary rod
    towerOfHanoi(N, rod_A, rod_C, rod_B);

    return 0;
}

