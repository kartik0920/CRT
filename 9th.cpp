#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverse(vector<char> &str)
{
    int s = 0, e = str.size() - 1;
    while (e >= s)
    {
        swap(str[s++], str[e--]);
    }
}

int main()
{
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    reverse(str);

    for (auto i : str)
    {
        cout << i << " ";
    }
    return 0;
}