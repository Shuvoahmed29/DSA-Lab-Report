// 2.Sum of boundary elements in a matrix using random number.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter row number of a matrix: ";
    int row;
    cin >> row;
    cout << "Enter coloum number of a matrix: ";
    int col;
    cin >> col;
    int matrix[row][col];
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = rand() % 100;
            cout << matrix[i][j] << " ";
            if (j == 0)
                sum += matrix[i][j];
            else if (j == col - 1)
                sum += matrix[i][j];
            else if (i == 0 && i < col - 1)
                sum += matrix[i][j];
            else if (i == row - 1 && j < col - 1)
                sum += matrix[i][j];
        }
        cout << endl;
    }
    cout << "Sum of boundary elements : " << sum << endl;
}