#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    if(n == 0 || n == 1) return false;

    //for prime between 2 to n-1 there is no factor 
    for(int i=2; i*i<=n-1; i++) {  // O(sqrt(n))
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}


int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) { //O(n)
        if(checkPrime(i)) {  //O(sqrt(n))
            cout << i << " ";
        }
    }

    return 0;
}