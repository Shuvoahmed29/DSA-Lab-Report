// 6.Selection Sort.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of array element: ";
    int n;
    cin >> n;
    int array[n];
    for (auto &d : array)
        cin >> d;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int min = array[i];
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                index = j;
            }
        }
        swap(array[i], array[index]);
    }
    for (auto d : array)
        cout << d << " ";
}