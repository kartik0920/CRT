#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    vector<int> arr;
    cout << "Enter number:";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is greatest";
        }
        else
        {
            cout << "C is greatest";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B is greatest";
        }
        else
        {
            cout << "C is gretest";
        }
    }
    return 0;
}