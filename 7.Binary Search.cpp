// 7.Binary Search.
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
    sort(array + 0, array + n);
    cout << "Which element you want to Search: ";
    int element;
    cin >> element;
    int first = 0, last = n - 1;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (element > array[mid])
            first = mid + 1;
        else if (element < array[mid])
            last = mid - 1;
        if (element == array[mid])
        {
            cout << element << " is found in index: " << mid + 1 << endl;
            break;
        }
    }
}