#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> primes(n+1,true);

    //as we know 0 and 1 are not prime num
    primes[0] = false;
    primes[1] = false;

    for(int i=2; i<=n; i++) {
        for(int j=i*i; j<=n; j+=i) {
            primes[j] = false;
        }
    }

    return primes;
}

int main() {
    int n;
    cin >> n;

    vector<bool> primes = sieve(n);

    for(int i=0; i<=n; i++){
        if(primes[i]) {
            cout << i << " is prime number\n";
        }else {
            cout << i << " is not prime number\n";
        }
    }


    return 0;
}