#include <iostream>
#include <stack>


void towerOfHanoi(int n, std::stack<int>& from_rod, std::stack<int>& to_rod, std::stack<int>& aux_rod)

void towerOfHanoi(int n, std::stack<char>& from_rod, std::stack<char>& to_rod, std::stack<char>& aux_rod)
{
    if (n == 0) {
        return;
    }

    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    int disk = from_rod.top();
    from_rod.pop();
    to_rod.push(disk);
    std::cout << "Move disk " << disk << " from rod " << from_rod << " to rod " << to_rod << std::endl;


    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    
    char disk = from_rod.top();
    from_rod.pop();
    to_rod.push(disk);
    
    std::cout << "Move disk " << disk << " from rod " << from_rod << " to rod " << to_rod << std::endl;
    

    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int N = 3;
    

    std::stack<int> rod_A, rod_B, rod_C;
    
    // Initialize rod A with disks in descending order
    for (int i = N; i > 0; --i) {
        rod_A.push(i);

    std::stack<char> rod_A, rod_B, rod_C;
    
    // Initialize rod A with disks in descending order
    for (int i = N; i > 0; --i) {
        rod_A.push('0' + i);

    }
    
    towerOfHanoi(N, rod_A, rod_C, rod_B);
    
    return 0;
}
