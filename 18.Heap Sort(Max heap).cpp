// 18.Heap Sort(Max heap).cpp
#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int root)
{
    int maxi = root;
    int left = 2 * root+1;
    int right = 2 * root + 2;
    if (left < n && arr[left] > arr[maxi])
        maxi = left;
    if (right < n && arr[right] > arr[maxi])
        maxi = right;

    if (maxi != root)
    {
        swap(arr[root], arr[maxi]);
        heapify(arr, n, maxi);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
int main()
{
    cout << "Enter number of heap elements: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nBefore heap sort!!\n";
    for (int d : arr)
        cout << d << " ";

    heapSort(arr, n);

    cout << "\nAfter heap sort!!\n";
    for (int d : arr)
        cout << d << " ";
}