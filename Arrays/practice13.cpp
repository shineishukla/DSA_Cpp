// display multiplication of two matrices entered by the user

#include <iostream>
using namespace std;

void twoDArrayMultiplication(int arr1[][4], int arr2[][6], int arr3[][6], int r1, int c1, int r2, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            arr3[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main(){
    int arr1[5][4], arr2[4][6], arr3[5][6], r1, c1, r2, c2, i, j, k;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "Multiplication of matrices not possible";
        exit(0);
    }
    cout << "Enter the elements of first matrix: ";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            cin >> arr1[i][j];
    }
    cout << "Enter the elements of second matrix: ";
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
            cin >> arr2[i][j];
    }
    twoDArrayMultiplication(arr1, arr2, arr3, r1, c1, r2, c2);
    cout << "Multiplication of two matrices is: " << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            cout << arr3[i][j] << " ";
        cout << endl;
    }
    return 0;
}