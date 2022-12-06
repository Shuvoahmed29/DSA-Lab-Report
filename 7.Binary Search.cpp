// 7.Binary Search.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter array size: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " size array!!\n";
    for (int &d : arr)
        cin >> d;
    cout << "Which element you want to search: ";
    int element;
    cin >> element;

    cout << "\nBefore sort!!\n";
    for (int d : arr)
        cout << d << " ";

    sort(arr, arr + n);

    int first = 0, last = n - 1, p = 0;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (arr[mid] == element)
        {
            cout << "\nElement is found in " << mid + 1 << " index!\n";
            p = 1;
            break;
        }
        else if (arr[mid] < element)
            first = mid + 1;
        else if (arr[mid] > element)
            last = mid - 1;
    }

    if (p == 0)
        cout << "\nElement is not found!!\n";
}