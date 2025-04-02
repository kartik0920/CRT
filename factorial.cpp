#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int getFact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * getFact(n - 1);
}

int main()
{
    int n = 5;

    cout << getFact(n) << endl;
    return 0;
}