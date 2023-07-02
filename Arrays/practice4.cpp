//Rearrange an array such that arr[i] = i

#include <iostream>
using namespace std;

void rearrange(){
    int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        if (arr[i] != -1 && arr[i] != i){
            int x = arr[i];
            while (arr[x] != -1 && arr[x] != x){
                int y = arr[x];
                arr[x] = x;
                x = y;
            }
            arr[x] = x;
            if (arr[i] != i){
                arr[i] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    rearrange();
    return 0;
}