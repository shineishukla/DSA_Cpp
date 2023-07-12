//linear search in array

#include<iostream>
using namespace std;

void linearSrch(){
    int n, key;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key: ";
    cin>>key;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<"Key found at index "<<i<<endl;
            return;
        }
    }
    cout<<"Key not found"<<endl;
}

int main(){
    linearSrch();
    return 0;
}




