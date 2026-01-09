#include <bits/stdc++.h>
using namespace std;

int mularExponentiation(int a, int b, int m) {  // O(log b)
    if(b==0) {
        return 1;
    }
    if(b==1) {
        return a;
    }

    int x = mularExponentiation(a,b/2,m)%m;
    int ans =0;

    if(b%2 == 1) {
        // ans = x*x*a;
        ans = (x%m * x%m) %m;
        ans = (ans%m * ans%m)%m;
    }else {
        ans = (x%m * x%m) %m;
    }

    return ans;
}

int main() {
    int a,b;
    cin >> a >> b;

    int m = 100;

    // calPower(a,b);
    cout << mularExponentiation(a,b,m);

    return 0;
}

