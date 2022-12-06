// 5.Insertion Sort.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of array elements: ";
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    cout << "\nSorted Array is: ";
    for (auto d : array)
    {
        cout << d << " ";
    }
}