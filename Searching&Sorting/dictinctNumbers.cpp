#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int distinct(int arr[], int n) {
     set<int> s;
     for(int i = 0; i < n; i++){
        s.insert(arr[i]);
     }

     return s.size();
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << distinct(arr, n) ;
    
    return 0;
}