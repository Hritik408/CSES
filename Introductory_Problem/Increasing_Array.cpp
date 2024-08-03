#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll inc_arr(ll* arr, ll n) {
    ll count = 0;
    for(ll i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
         count += arr[i-1] - arr[i];
         arr[i] = arr[i-1];
        }
    }

    return count;
}

int main() {
    ll n;
    cin >> n;

    ll arr[n];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << inc_arr(arr, n) << endl;

    return 0; 
}