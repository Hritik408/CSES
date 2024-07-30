#include <bits/stdc++.h>
using namespace std;

pair<int, int> findPair(int arr[], int n, int x) {
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x) {
                return make_pair(i + 1, j + 1); // Return 1-based indices
            }
        }
    }
    return make_pair(-1, -1); // Return an invalid pair if not found
}

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int, int> result = findPair(arr, n, x);
    
    if (result.first == -1) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
