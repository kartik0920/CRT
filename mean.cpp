#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int meanArr(vector<int> arr)
{
    int sum = 0;
    for (auto i : arr)
    {
        sum += i;
    }

    return sum / arr.size();
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << meanArr(arr);
    return 0;
}