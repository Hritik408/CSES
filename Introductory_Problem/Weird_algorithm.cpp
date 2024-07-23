#include <bits/stdc++.h>

using namespace std;

void seq(long n)
{
    vector<long long> arr;
    arr.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else if (n % 2 != 0)
            n = n * 3 + 1;

        arr.push_back(n);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    long long n;
    cin >> n;
    seq(n);
 
    return 0;
}