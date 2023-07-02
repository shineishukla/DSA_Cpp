//sort arrays in ascending and descending order using selection sort

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

void selectionSortDesc(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int max = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] > arr[max]){
                max = j;
            }
        }
        swap(arr[max], arr[i]);
    }
}

int main(){
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSortDesc(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
