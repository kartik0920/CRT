#include <bits/stdc++.h>
#include <iostream>
using namespace std;

float median(vector<int> arr1, vector<int> arr2)
{
    vector<int> arr;
    int n = arr1.size(), m = arr2.size();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr.push_back(arr1[i++]);
        }
        else
        {
            arr.push_back(arr2[j++]);
        }
    }
    while (i < n)
    {
        arr.push_back(arr1[i++]);
    }

    while (j < m)
    {
        arr.push_back(arr2[j++]);
    }

    int size = arr.size();
    if (size & 1)
    {
        return arr[size / 2];
    }
    else
    {
        int mid = size / 2;

        return (float(arr[mid]) + arr[mid - 1]) / 2;
    }
}

int main()
{
    vector<int> arr1 = {1, 3}, arr2 = {2, 4};
    cout << median(arr1, arr2);
    return 0;
}