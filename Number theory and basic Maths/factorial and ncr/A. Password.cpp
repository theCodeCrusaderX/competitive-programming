#include <bits/stdc++.h>
using namespace std;


// n = 7
// s = 0 2 3 4 5 6 9 
// ans = 168

int nCrUsingRecursion(int n, int r) {
    if(r>n) return 0;
    if(r == 0 || r == n) return 1;

    //recursion
    return nCrUsingRecursion(n-1,r-1) + nCrUsingRecursion(n-1,r);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
        }
        
        cout << nCrUsingRecursion(10-n,2)*6 << "\n";
    }
    return 0;
}