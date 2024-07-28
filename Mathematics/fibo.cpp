#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int fibo(int n){
    if(n == 0) return 0;
    if(n < 3) return 1;
    return fibo(n-2) + fibo(n-1);
}

int main() {
    int n ;
    cin >> n;
    cout << fibo(n) << endl;

    return 0;
}