// 14.Evaluation of postfix expresion using stack.cpp
#include <bits/stdc++.h>
using namespace std;
bool isOperand(char c)
{
    return (c >= '0' && c <= '9');
}
int main()
{
    cout << "Enter postfix expresion: ";
    char ch[200];
    gets(ch);
    stack<int> infix;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (isOperand(ch[i]))
        {
            int p = ch[i] - '0';
            infix.push(p);
        }
        else
        {
            int n = infix.top();
            infix.pop();
            int m = infix.top();
            infix.pop();
            int ans = 0;
            if (ch[i] == '+')
                ans = n + m;
            if (ch[i] == '-')
                ans = n - m;
            if (ch[i] == '*')
                ans = n * m;
            if (ch[i] == '/')
                ans = n / m;
            infix.push(ans);
        }
    }
    cout << "Postfix valu: " << infix.top() << endl;
}