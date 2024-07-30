#include <bits/stdc++.h>
using namespace std;

pair<int, int> findPair(int arr[], int n, int x) {
    vector<pair<int, int>> indexedArr(n);
    
    // Store the original indices
    for (int i = 0; i < n; ++i) {
        indexedArr[i] = {arr[i], i + 1}; // Store 1-based index
    }

    // Sort the array based on values
    sort(indexedArr.begin(), indexedArr.end());

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = indexedArr[left].first + indexedArr[right].first;

        if (sum == x) {
            return make_pair(indexedArr[left].second, indexedArr[right].second);
        } else if (sum < x) {
            ++left;
        } else {
            --right;
        }
    }

    return make_pair(-1, -1); // Return an invalid pair if not found
}

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++) {
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
