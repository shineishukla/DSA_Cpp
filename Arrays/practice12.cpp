//Smallest Difference Triplet from Three arrays

#include <iostream>
#include <climits>
using namespace std;

void tripletsmalldiff(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;
    int diff = INT_MAX;
    int res_i, res_j, res_k;
    while (i < n1 && j < n2 && k < n3){
        int minimum = min(arr1[i], min(arr2[j], arr3[k]));
        int maximum = max(arr1[i], max(arr2[j], arr3[k]));
        if (maximum-minimum < diff){
            diff = maximum-minimum;
            res_i = i;
            res_j = j;
            res_k = k;
        }
        if (arr1[i] == minimum){
            i++;
        }
        else if (arr2[j] == minimum){
            j++;
        }
        else{
            k++;
        }
    }
    cout << arr1[res_i] << " " << arr2[res_j] << " " << arr3[res_k];
}

int main(){
    int arr1[] = {25, 42, 98};
    int arr2[] = {10, 17, 122};
    int arr3[] = {91, 14, 69};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    tripletsmalldiff(arr1, arr2, arr3, n1, n2, n3);
    return 0;
}