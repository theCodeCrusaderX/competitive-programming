#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> primes(n+1, true);

    primes[0] = primes[1] = false;

    for(int i = 2; i * i <= n; i++) {
        if(primes[i]) {
            for(int j = i * i; j <= n; j += i)
                primes[j] = false;
        }
    }
    return primes;
}

int main() {
    long long n;
    cin >> n;
    vector<bool> primes = sieve(n);

    cout << "Prime factorization of " << n << ":\n";

    for(long long p = 2; p <= n; p++) {
        if(primes[p] && n % p == 0) {

            int count = 0;
            while(n % p == 0) {
                n /= p;
                count++;
            }

            cout << p << "^" << count << "\n";
        }
    }
    return 0;
}
