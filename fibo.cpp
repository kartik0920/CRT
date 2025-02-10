#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void fibo(int n)
{
    int first = 0, second = 1;
    if (n >= 1)
    {
        cout << first << " ";
    }
    if (n >= 2)
    {
        cout << second << " ";
    }
    for (int i = 0; i < n - 2; i++)
    {
        int third = first + second;
        cout << third << " ";
        first = second;
        second = third;
    }
}

int main()
{
    int n = 6;
    fibo(n);
    return 0;
}