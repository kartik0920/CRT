#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sumFirst(int n)
{
    return (n * (n + 1) / 2);
}

int main()
{
    int n = 10;
    cout << sumFirst(n) << endl;
    return 0;
}