#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void check(int n)
{
    if (n > 0)
    {
        cout << "+ve";
    }
    else if (n == 0)
    {
        cout << "Zero";
    }
    else
    {
        cout << "-ve";
    }
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    check(n);
    return 0;
}