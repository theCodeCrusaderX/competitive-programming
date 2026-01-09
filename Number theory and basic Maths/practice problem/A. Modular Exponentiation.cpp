#include <bits/stdc++.h>
using namespace std;

int calPowerUsingBinary(int a, int b) {  // O(log b)
    if(b==0) {
        return 1;
    }
    if(b==1) {
        return a;
    }

    int x = calPowerUsingBinary(a,b/2);
    int ans =0;

    if(b%2 == 1) {
        ans = x*x*a;
    }else {
        ans = x*x;
    }

    return ans;
}

int main() {
    long long n,m;

    cin >> n >> m;

    // m % 2^n
    if(n > 30) {
        cout << m;
    }else {
        long long x = calPowerUsingBinary(2,n);
        cout << m%x;
    }
    return 0;
}