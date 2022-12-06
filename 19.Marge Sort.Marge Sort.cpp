// 19.Marge Sort.cpp
#include <bits/stdc++.h>
using namespace std;
void marge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int index = start;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[index];
        index++;
    }
    index = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[index];
        index++;
    }
    index = start;
    int idx1 = 0, idx2 = 0;
    while (idx1 < len1 && idx2 < len2)
    {
        if (arr2[idx2] > arr1[idx1])
        {
            arr[index++] = arr1[idx1++];
        }
        else
        {
            arr[index++] = arr2[idx2++];
        }
    }

    while (idx1 < len1)
    {
        arr[index++] = arr1[idx1++];
    }
    while (idx2 < len2)
    {
        arr[index++] = arr2[idx2++];
    }
}
void margeSort(int *arr, int f, int l)
{
    if (f >= l)
        return;
    int mid = (f + l) / 2;
    margeSort(arr, f, mid);
    margeSort(arr, mid + 1, l);
    marge(arr, f, l);
}
int main()
{
    cout << "Enter array size: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Before sorting array!!\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    margeSort(arr, 0, n - 1);

    cout << "After sorting array!!\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}