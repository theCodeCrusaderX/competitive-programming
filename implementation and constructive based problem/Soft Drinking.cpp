#include <bits/stdc++.h>
using namespace std;

int main() {
    //n, k, l, c, d, p, nl, np
    short int n;
    cin >> n;
    short int k;
    cin >> k;
    short int l;
    cin >> l;
    short int c;
    cin >> c;
    short int d;
    cin >> d;
    short int p;
    cin >> p;
    short int nl;
    cin >> nl;
    short int np;
    cin >> np;

    //to make a toast we need nl(ml) + d(slice) + np(g)
    int ans = min({ (k*l)/nl, (c*d), (p)/np }) / n;
    cout << ans << "\n";

    return 0;
}