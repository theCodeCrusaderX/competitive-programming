#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if(n == 1 || n == 0) return 1;

    int p=1;
    for(int i=1; i<=n; i++) {
        p*=i;
    }

    return p;
}

int nCrUsingFactorial(int n, int r) {
    if(r == 0 || r == n) {
        return 1;
    }
    if(r > n) {
        return 0;
    }

    return (fact(n)/fact(r))/fact(n-r);
}

int nCrUsingRecursion(int n, int r) {
    if(r>n) return 0;
    if(r == 0 || r == n) return 1;

    //recursion
    return nCrUsingRecursion(n-1,r-1) + nCrUsingRecursion(n-1,r);
}

int main() {
    int n,r;
    cin >> n >> r;
    
    // cout << nCrUsingFactorial(n,r);
    cout << nCrUsingRecursion(n,r);

    return 0;
}