#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;

   unordered_map<char, int> x;

   cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (x.find(s[i]) != x.end())
        {
            x[s[i]]++;
        }
        else
        {
            x[s[i]] = 1;
        }
    }

    int count = 0;

    for (const auto &pair : x)
    {
        if (pair.second > count)
        {
            count = pair.second;
        }
    }

    cout << count << endl;

    return 0;
}