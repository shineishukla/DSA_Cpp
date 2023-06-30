// Find second largest element in an array

#include <iostream>
using namespace std;

void secondLargest(int arr[], int arr_size){
    int one, two, three;
    if (arr_size < 2){
        cout << "Invalid Input";
        return;
    }
    three = one = two = INT_MIN;
    for (int i = 0; i < arr_size; i++){
        if (arr[i] > one){
            three = two;
            two = one;
            one = arr[i];
        }
        else if (arr[i] > two){
            three = two;
            two = arr[i];
        }
        else if (arr[i] > three){
            three = arr[i];
        }
    }
}

int main(){
    int arr[] = {112, 131, 135, 100, 134, 123, 144, 155};
    int n = sizeof(arr)/sizeof(arr[0]);
    secondLargest(arr, n);
    return 0;
}