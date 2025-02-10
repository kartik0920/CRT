#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool solve(int n)
{
    int check = 0, m = n;
    while (n != 0)
    {
        int r = n % 10;
        int digit = r * r * r;
        check = check + (digit);
        n /= 10;
    }
    return check == m;
}

int main()
{
    int n = 153;
    cout << solve(n) << endl;
    return 0;
}