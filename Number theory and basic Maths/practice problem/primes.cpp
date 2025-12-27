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
    vector<int> vec;
    bool flag = false;

    for(int i=0; i<n; i++) {
        if(primes[i]) {
            vec.push_back(i);
        }
    }

    int begin = 0;
    int end = vec.size()-1;

    while(begin < end) {
        int sum = vec[begin] + vec[end];
        if(sum < n) {
            begin++;
        }else if(sum > n) {
            end--;
        }else {
            flag = true;
            cout << vec[begin] << " " << vec[end];
            break;
        }
    }

    if(!flag) {
        cout << -1;
    }


    return 0;
}