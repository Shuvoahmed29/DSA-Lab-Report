// 11.Queue implementation using array.cpp
#include <bits/stdc++.h>
using namespace std;
int m = 200;

void display(int queue[], int front, int rear){
    if (front == rear) cout << "Queue is empty!!" << endl;
    else{
        cout << "Queue: ";
        for (int i = front; i < rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}
int main(){
    int queue[m], rear = 0, front = 0;
    while (1){
        system("cls");
        display(queue, front, rear);
        cout << "Enter I for insert!!\n";
        cout << "Enter D for delete!!\n";
        cout << "Enter any for delete!!\n";
        cout << "Enter your choice: ";
        char ch; cin >> ch;
        if (ch == 'i' || ch == 'I'){
            if (rear == m){
                cout << "Queue Overflow!!\n";
                _sleep(1000);
            }
            else{
                cout << "\nEnter element for insert: ";
                int n; cin >> n;
                queue[rear] = n;
                rear++;
            }
        }
        else if (ch == 'd' || ch == 'D'){
            if (rear == front){
                cout << "Queue Underflow!!\n";
                _sleep(1000);
            }
            else front = front + 1;
        }
        else   break;
    }
}