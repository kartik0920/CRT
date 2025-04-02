#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(vector<int> arr)
{
    int even = 0, odd = 0;
    for (auto i : arr)
    {
        if (i & 1)
        {
            odd += i;
        }
        else
        {
            even += i;
        }
    }

    cout << "Even sum is " << even << endl;
    cout << "Odd sum is " << odd << endl;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    solve(arr);
    return 0;
}