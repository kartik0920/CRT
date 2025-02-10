#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int reverse(int n)
{
    int ans = 0;
    while (n != 0)
    {
        ans = (ans * 10) + n % 10;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n = 123;
    cout << reverse(n);
    return 0;
}