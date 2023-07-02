//Equilibrium index of an array

#include <iostream>
using namespace std;

void equilibrium(int arr[], int n){
    int sum = 0;
    int leftsum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    for (int i = 0; i < n; i++){
        sum -= arr[i];
        if (leftsum == sum){
            cout << i;
        }
        leftsum += arr[i];
    }
}

int main(){
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    equilibrium(arr, n);
    return 0;
}