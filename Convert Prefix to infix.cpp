// Convert Prefix to infix.cpp
#include <bits/stdc++.h>
using namespace std;
bool isOperand(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}
int main()
{
    cout << "Enter prefix expresion: ";
    string str;
    cin >> str;
    stack<string> infix;
    int len = str.size();
    for (int i = len - 1; i >= 0; i--)
    {
        if (isOperand(str[i]))
        {
            string op1 = infix.top();
            infix.pop();
            string op2 = infix.top();
            infix.pop();
            infix.push("(" + op1 + str[i] + op2 + ")");
        }
        else
        {
            string op(1, str[i]);
            infix.push(op);
        }
    }
    cout << "Infix Expression: ";
    while (!infix.empty())
    {
        cout << infix.top();
        infix.pop();
    }
    cout << endl;
}