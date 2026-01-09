#include <bits/stdc++.h>
using namespace std;

void calPower(int a, int b) {
    int p=1;

    for(int i=1; i<=b; i++) {  //O(b)
        p=p*a;
    }

    cout << p <<"\n";
}

int calPowerUsingBinary(int a, int b) {  // O(log b)
    if(b==0) {
        return 1;
    }
    if(b==1) {
        return a;
    }

    int x = calPowerUsingBinary(a,b/2);
    int ans =0;

    if(b%2 == 1) {
        ans = x*x*a;
    }else {
        ans = x*x;
    }

    return ans;
}

int main() {
    int a,b;
    cin >> a >> b;

    // calPower(a,b);
    cout << calPowerUsingBinary(a,b);

    return 0;
}