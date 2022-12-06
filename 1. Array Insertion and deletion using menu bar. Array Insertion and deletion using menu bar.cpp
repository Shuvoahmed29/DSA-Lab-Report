// 1. Array Insertion and deletion using menu bar.

#include <bits/stdc++.h>
using namespace std;
#include "windows.h"
vector<int> vec;
void display(vector<int> vec)
{
    if (vec.size() == 0)
        cout << "Array is empty!\n"
             << endl;
    else
    {
        cout << "Array is : ";
        for (auto d : vec)
            cout << d << " ";
        cout << endl;
    }
}
int main()
{
    while (1)
    {
        system("CLS");
        display(vec);
        cout << "Enter I for insert elemet in an array!!\n";
        cout << "Enter D for delete element in an array!!\n";
        cout << "Enter any for Exit!!\n";
        cout << "\nEnter your choice: ";
        char ch;
        cin >> ch;
        if (ch == 'i' || ch == 'I')
        {
            cout << "Enter any integer for insert: ";
            int x;
            cin >> x;
            vec.push_back(x);
        }
        else if (ch == 'd' || ch == 'D')
        {
            if (vec.size() == 0)
            {
                cout << "Array is already empty!!\n\n";
                Sleep(1000);
            }
            else
                vec.erase(vec.begin() + vec.size() - 1);
        }
        else
            break;
    }
}
