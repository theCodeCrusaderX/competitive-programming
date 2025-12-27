#include <bits/stdc++.h>
using namespace std;

bool checkPrimeInSquartRootOFTimeComplexity(int n) {
    if(n == 0 || n == 1) return false;

    //for prime between 2 to n-1 there is no factor 
    for(int i=2; i*i<=n-1; i++) {  // O(sqrt(n))
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}


bool checkPrimeInLinearTimeComplexity(int n) {
    if(n == 0 || n == 1) false;

    //for prime between 2 to n-1 there is no factor 
    for(int i=2; i<=n-1; i++) {  // O(n)
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    if(checkPrimeInSquartRootOFTimeComplexity(n)) {
        cout << "prime";
    }else {
        cout << "not prime";
    }
    // if(checkPrimeInLinearTimeComplexity(n)) {
    //     cout << "prime";
    // }else {
    //     cout << "not prime";
    // }
    return 0;
}