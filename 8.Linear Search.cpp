// 8.Linear Search.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int array[n];
    for (auto &d : array)
        cin >> d;
    cout << "Which element you want to search: ";
    int element;
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == element)
        {
            cout << element << " is found in index: " << i + 1 << endl;
            break;
        }
    }
}