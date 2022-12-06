// 10.Stack implementation using array.cpp
#include <bits/stdc++.h>
using namespace std;
#include "windows.h"
using ll = long long;
int m = 200;

void display(ll stack[], ll top)
{
    if (top == 0)
        cout << "Stack is empty!!\n";
    else
    {
        cout << "Stack: ";
        for (int i = top - 1; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
}
int main()
{
    ll stack[m], top = 0;
    while (1)
    {
        system("CLS");
        display(stack, top);
        cout << "Enter I for insert!!\n";
        cout << "Enter D for delete!!\n";
        cout << "Enter any for exit!!\n";
        cout << "Enter choice: ";
        char ch;
        cin >> ch;

        if (ch == 'i' || ch == 'I')
        {
            if (top >= m)
            {
                cout << "Stack Overflow!!\n";
                Sleep(1000);
            }
            else
            {
                cout << "\nEnter element for insert: ";
                ll n;
                cin >> n;
                stack[top] = n;
                top++;
            }
        }
        else if (ch == 'd' || ch == 'D')
        {
            if (top == 0)
            {
                cout << "Stack Underflow!!\n";
                Sleep(1000);
            }
            else
            {
                top = top - 1;
            }
        }
        else
            break;
    }
}