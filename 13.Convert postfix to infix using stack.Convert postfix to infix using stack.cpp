// 13.Convert postfix to infix using stack.
#include <bits/stdc++.h>
using namespace std;
bool isOperand(char ch)
{
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}
int main()
{
    cout << "Enter postfix expression: ";
    string str;
    cin >> str;
    stack<string> infix;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isOperand(str[i]))
        {
            string op(1, str[i]);
            infix.push(op);
        }
        else
        {
            string op1 = infix.top();
            infix.pop();
            string op2 = infix.top();
            infix.pop();
            infix.push("(" + op2 + str[i] + op1 + ")");
        }
    }
    cout << "Infix expression: ";
    while (!infix.empty())
    {
        cout << infix.top() << endl;
        infix.pop();
    }
    cout << endl;
}