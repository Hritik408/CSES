#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> nrr(n), mrr(m);

    for(int i = 0; i < n; i++){
        cin >> nrr[i];
    }

    for(int i = 0; i < m; i++){  // size of appartments
        cin >> mrr[i];
    }

    vector<pair<int, int>> ranges;
    for(int i = 0; i < n; i++){
        ranges.emplace_back(nrr[i]-k, nrr[i]+k);
    }

    int count = 0;

    for(const auto& range : ranges){
       for(int i = 0; i < m; i++){

        if(mrr[i] >= range.first && mrr[i] <= range.second) {
            count++;
            break;
        }
        if(mrr[i] >= range.first && mrr[i] <= range.second) {
            count++;
            break;
        }
      
       }
    }

   cout << count << endl;

    return 0;
}