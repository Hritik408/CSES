#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string s, x;
    // cin >> s >> x;
    getline(cin, s);
    getline(cin, x);

    string c;
    int count = 0;
    size_t x_len = x.length();
    size_t s_len = s.length();
    
    for(size_t i = 0; i <= s_len - x_len; i++){
        
        c = s.substr(i, x_len);

        if(c == x) {
            count ++;
            c = "";
        }
    }

    cout << count ;
    return 0;
}