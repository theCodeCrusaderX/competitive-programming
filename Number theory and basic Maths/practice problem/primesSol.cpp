#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    if(n == 0 || n == 1) return false;

    //for prime between 2 to n-1 there is no factor 
    for(int i=2; i*i<=n; i++) {  // O(sqrt(n))
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}


int main() {
    int n;
    cin >> n;
    if(checkPrime(n-2)) {
        cout << 2 << " " << n-2;
    }else {
        cout << -1;
    }

    return 0;
}