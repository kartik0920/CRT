#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isOdd(int n)
{
    return n & 1;
}
int main()
{
    int n = 5;
    cout << isOdd(n) << endl;
    return 0;
}