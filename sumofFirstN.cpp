#include <bits/stdc++.h>
#include <iostream>

int sumN(int n)
{
    return (n * (n + 1)) / 2;
}
using namespace std;
int main()
{
    int n;
    cout << "Enter N:";
    cin >> n;
    cout << sumN(n) << endl;
    return 0;
}