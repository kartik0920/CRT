#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> solve(vector<int> arr, int key)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] + arr[i] == key)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = solve(arr, target);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}