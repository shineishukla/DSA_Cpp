//Rearrange an array in maximum minimum form using Two Pointer Technique

#include <iostream>
using namespace std;

void arrange(int arr[], int n){
    int i = 0, j = n-1;
    while (i < j){
        cout << arr[j--] << " ";
        cout << arr[i++] << " ";
    }
    if (n % 2 != 0){
        cout << arr[i];
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrange(arr, n);
    return 0;
}
