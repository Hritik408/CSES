#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solution(vector<int> arr, int n, int x)
{
    int count = 0;

    sort(arr.begin(), arr.end());
    int i = 0; 
    int j = arr.size() - 1;

    while(i <= j) {
        if(arr[i] + arr[j] <= x){
            i++;
            j--;
        }
        else j--;
        count ++;
    }

    return count;
}

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = solution(arr, n, x);

    cout << ans << endl;

    return 0;
}