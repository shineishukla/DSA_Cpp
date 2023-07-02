//Search, Insert and Delete in an unsorted array

#include <iostream>
using namespace std;

void search(int arr[], int n, int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

void insert(int arr[], int& n, int x, int pos){
    int index = pos - 1;
    for (int i = n-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = x;
    n++;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
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
    int arr[] = { 12, 34, 10, 6, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int pos = 2;
    search(arr, n, x);
    insert(arr, n, x, pos);
    remove(arr, n, x);
    return 0;
}
