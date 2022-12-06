// 9.Student Result.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of student: ";
    int n, temp;
    cin >> n;
    temp = n;
    string name[n], grade[n];
    int roll[n], mark[n], copy[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Name of student " << i + 1 << ": ";
        cin >> name[i];

        cout << "Roll of student " << i + 1 << ": ";
        cin >> roll[i];

        cout << "Mark of student " << i + 1 << ": ";
        cin >> mark[i];
        copy[i] = mark[i];
        cout << endl;

        // For Grade
        if (mark[i] >= 80)
            grade[i] = "A+";
        else if (mark[i] >= 75)
            grade[i] = "A";
        else if (mark[i] >= 70)
            grade[i] = "A-";
        else if (mark[i] >= 65)
            grade[i] = "B+";
        else if (mark[i] >= 60)
            grade[i] = "B";
        else if (mark[i] >= 55)
            grade[i] = "B-";
        else if (mark[i] >= 50)
            grade[i] = "C+";
        else if (mark[i] >= 45)
            grade[i] = "C";
        else if (mark[i] >= 40)
            grade[i] = "D";
        else
            grade[i] = "F";
    }
    cout << "Roll      "
         << "Name    "
         << "Mark    "
         << "Grade" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << roll[i] << "        " << name[i] << "    " << mark[i] << "       " << grade[i] << endl;
    }
    cout << endl;
    cout << "After Sorting according to mark!!" << endl;
    sort(copy + 0, copy + n);
    reverse(copy + 0, copy + n);
    while (temp != 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (copy[i] == mark[j])
                {
                    cout << roll[j] << "        " << name[j] << "    " << mark[j] << "       " << grade[j] << endl;
                    temp--;
                }
            }
        }
    }
}