//search, insert and delete in an sorted array

#include <iostream>
using namespace std;

void insert(int arr[], int& n, int x){
    int i;
    for (i = n-1; (i >= 0 && arr[i] > x); i--){
        arr[i+1] = arr[i];
    }
    arr[i+1] = x;
    n++;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void search(int arr[], int n, int x){
    int low = 0, high = n-1;
    while (low <= high){
        int mid = (low + high)/2;
        if (arr[mid] == x){
            cout << mid << endl;
            return;
        }
        else if (arr[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << -1 << endl;
}

void remove(int arr[], int& n, int x){
    int i;
    for (i = 0; i < n; i++){
        if (arr[i] == x){
            break;
        }
    }
    if (i == n){
        cout << "Element not found" << endl;
        return;
    }
    for (int j = i; j < n-1; j++){
        arr[j] = arr[j+1];
    }
    n--;
    for (int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 25;
    insert(arr, n, x);
    search(arr, n, x);
    remove(arr, n, x);
    return 0;
}