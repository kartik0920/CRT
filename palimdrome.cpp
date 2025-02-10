#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool is_palimdrome(string str)
{
    int s = 0, e = str.length() - 1;
    while (e >= s)
    {
        if (str[s++] != str[e--])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string str = "mom";
    cout << is_palimdrome(str) << endl;
    return 0;
}