#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool leap(int n)
{
    if (n % 4 == 0 && n % 100 != 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int year = 2004;
    if (leap(year))
    {
        cout << "It is leap year";
    }
    else
    {
        cout << "It is not leap year";
    }
    return 0;
}