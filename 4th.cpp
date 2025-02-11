#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int m = n, sum = 0;
    while (n != 0)
    {
        int digit = (n % 10) * (n % 10) * (n % 10);
        sum += digit;
        n /= 10;
    }
    return m == sum;
}

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n = 153;
    cout << isArmstrong(n) << endl;

    cout << isPrime(n) << endl;

    n = 5;
    cout << fibo(n) << endl;
    return 0;
}