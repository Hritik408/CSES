#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int nrr[n];
    int arr[m];

    for(int i = 0; i < n; i++) {
        cin >> nrr[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    sort(nrr, nrr + n);

    for(int i = 0; i < m; i++){
        int s = 0;
        int e = n - 1;
        int ans = -1;

        while(s <= e) {
            int mid = (s + e) / 2;

            if(nrr[mid] <= arr[i]){
                ans = nrr[mid];
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        if(ans != -1) {
            cout << ans << endl;
            // remove used ticket as shift the remaining one's
            for(int j = 0; j < n; j++) {
                if(nrr[j] == ans) {
                    for(int k = j; k < n - 1; k++) {
                        nrr[k] = nrr[k + 1];
                    }
                    n--;
                    break;
                }
            }
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
