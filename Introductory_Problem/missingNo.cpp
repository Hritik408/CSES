#include <bits/stdc++.h>
#include <iostream>
#include <vector>
// #include <algorithm>

using namespace std;

int main()
{
    
    int n;
    cin >> n;
    vector<int> arr(n-1);

    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()) ;

    for(int i = arr.size()-1; i >= 0; i--){
        if(n == arr[i]){
            n--;
            continue;
        }
        cout << n;
        break;
    }

    return 0;
}