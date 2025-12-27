#include <bits/stdc++.h>
using namespace std;


int factorsUsingSquareRootOfTimeComplexity(int n) {   // O(sqrt(n))

    int count = 0;
    for(int i=1; i*i<=n; i++) {
        if(n%i == 0) {
            cout << i << " ";
            count++;
            if(i != n/i) {
                cout << n/i << " ";
                count++;
            }
        }
    }
    cout << "\n";
    return count;
}


int factorsUsingLinearTimeComplexity(int n) {      // O(n)

    int count = 0;
    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << "\n";
    return count;
}

int main() {
    int n;
    cin >> n;
    // cout << factorsUsingLinearTimeComplexity(n);
    cout << factorsUsingSquareRootOfTimeComplexity(n);
    return 0;
}