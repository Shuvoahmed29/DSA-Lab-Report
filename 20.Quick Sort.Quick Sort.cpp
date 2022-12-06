// 20.Quick Sort.cpp
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int cunt = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (pivot >= arr[i])
            cunt++;
    }
    int pivot_index = start + cunt;
    swap(arr[pivot_index], arr[start]);

    int i = start, j = end;
    while (i < pivot_index && j > pivot_index)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < pivot_index && j > pivot_index)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot_index;
}

void quickSort(int arr[], int f, int l)
{
    if (f >= l)
        return;
    int p = partition(arr, f, l);
    quickSort(arr, f, p - 1);
    quickSort(arr, p + 1, l);
}
int main()
{
    cout << "Enter array size: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Before quick sort!!\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    quickSort(arr, 0, n - 1);

    cout << "\nAfter quick sort!!\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}