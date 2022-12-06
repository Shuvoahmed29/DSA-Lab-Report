// 12.Circular queue implementation using array.cpp
#include <bits/stdc++.h>
using namespace std;
int m = 200, total = 0;
void display(int circular[], int front, int total)
{
    if (total == 0)
        cout << "Circular queue is empty" << endl;
    else
    {
        cout << "Circular queue: ";
        for (int i = 0; i < total; i++)
            cout << circular[(front + i) % m] << " ";
        cout << endl;
    }
}
int main()
{
    int circular[m], front = 0, rear = 0;
    while (1)
    {
        system("cls");
        display(circular, front, total);
        cout << "Enter I for insert!!\n";
        cout << "Enter D for delete!!\n";
        cout << "Enter any for exit!!\n";
        cout << "Enter your choice: ";
        char ch;
        cin >> ch;
        if (ch == 'i' || ch == 'I')
        {
            if (total >= m)
            {
                cout << "Queue Overflow!!\n";
                _sleep(1000);
            }
            else
            {
                cout << "\nEnter element for insert: ";
                int n;
                cin >> n;
                circular[rear % m] = n;
                rear++;
                total++;
            }
        }
        else if (ch == 'd' || ch == 'D')
        {
            if (total < 0)
            {
                cout << "Queue Overflow!!\n";
                _sleep(1000);
            }
            else
            {
                front++;
                total--;
            }
        }
        else
            break;
    }
}