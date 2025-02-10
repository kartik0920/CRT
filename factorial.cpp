#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long int fact(int n)
{
    if (n < 0)
    {
        cout << "Enter positive number";
        return -1;
    }
    long long int ans = 1;
    while (n != 0)
    {
        ans *= n;
        n--;
    }
    return ans;
}

int main()
{
    int n = 5;
    cout << fact(n) << endl;
    return 0;
}