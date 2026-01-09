#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> primes(n+1,true);

    //as we know 0 and 1 are not prime num
    primes[0] = false;

    for(int i=2; i<=n; i++) {
        if(n%i == 0) {
            continue;
        }
        if(primes[i]) {
            for(int j=i; j<=n; j+=i) {
                primes[j] = false;
            }
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
            cout << i << " are factor of given number\n";
        }
    }
    return 0;
}