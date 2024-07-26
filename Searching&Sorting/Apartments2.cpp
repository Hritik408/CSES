#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& A, vector<int>& B, int n, int m, int k) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int count = 0;
    int ptrA = 0, ptrB = 0;

    while (ptrA < n && ptrB < m) {
        if (abs(A[ptrA] - B[ptrB]) <= k) {
            count++;
            ptrA++;
            ptrB++;
        } else if (A[ptrA] < B[ptrB]) {
            ptrA++;
        } else {
            ptrB++;
        }
    }

    return count;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> A(n), B(m);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int result = solve(A, B, n, m, k);

    cout << result << endl;

    return 0;
}
