//transpose of matrix

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n >> m;

    int a[n][m];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    // Find the transpose of the matrix
    int b[m][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            b[j][i] = a[i][j];

    // Print the transpose of the matrix
    cout << "The transpose of the matrix is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }

    return 0;
}