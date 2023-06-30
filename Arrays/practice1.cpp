//Find the largest three distinct elements in an array

#include <iostream>
using namespace std;

void largestEle( int arr[], int arr_size)
{
    int i, one, two, three;
    if (arr_size < 3)
    {
        cout << "Invalid Input";
        return;
    }
    three = one = two = INT_MIN;
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] > one)
        {
            three = two;
            two = one;
            one = arr[i];
        }
        else if (arr[i] > two)
        {
            three = two;
            two = arr[i];
        }
        else if (arr[i] > three)
            three = arr[i];
    }
    cout << "Three largest elements are " << one << " " << two << " " << three;
}

int main()
{
    int arr[] = {112, 131, 135, 100, 134, 123, 144, 155};
    int n = sizeof(arr)/sizeof(arr[0]);
    largestEle(arr, n);
    return 0;
}
