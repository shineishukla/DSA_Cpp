//binary search in array

#include<iostream>
using namespace std;

void binarySrch(){
    int n, key;
    cout<<"Enter the size of array: ";
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    cout<<"Enter the key: ";
    cin>>key;
    int start=0, end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(ar[mid]==key){
            cout<<"Key found at index "<<mid<<endl;
            return;
        }
        else if(ar[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"Key not found"<<endl;
}

int main(){
    binarySrch();
    return 0;
}