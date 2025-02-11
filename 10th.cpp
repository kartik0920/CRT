#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<string> getPermutation(string str)
{
    set<char> arr;
    for (auto i : str)
    {
        arr.insert(i);
    }
}

int main()
{
    string str = "AAB";
    vector<string> str = getPermutation(str);
    return 0;
}