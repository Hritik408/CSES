#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n-1);
    long long sum = 0; // Using long long to handle large sums

    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    long long total_sum = (long long)n * (n + 1) / 2;
    cout << total_sum - sum << endl;

    return 0;
}
