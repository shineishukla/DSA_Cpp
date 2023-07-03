// find last occurence of an element in vector

#include <iostream>
#include <vector>
using namespace std;

int lastOccurence(vector<int> v, int x)
{
    int low = 0, high = v.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] > x)
            high = mid - 1;
        else if (v[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == v.size() - 1 || v[mid] != v[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {5, 10, 10, 15, 20, 20, 20};
    int x = 20;
    cout << lastOccurence(v, x);
    return 0;
}