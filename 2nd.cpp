#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n = 20;
    int sum = 0, evenCnt = 0, oddCnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            oddCnt++;
        }
        else
        {
            sum += i;
            evenCnt++;
        }
    }
    cout << oddCnt << " " << evenCnt << endl;
    cout << "Sum is " << sum << endl;
    return 0;
}