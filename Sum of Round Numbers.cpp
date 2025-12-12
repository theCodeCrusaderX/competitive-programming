#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int p = 10;
        string ans = "";
        int c = 0;
        while(n) {
            int rem = n%p;
            if(rem > 0) {
                ans += to_string(rem) + " ";
                c++;
            }
            n = n-rem;
            p *= 10;
        }
        cout << c << "\n";
        cout << ans << "\n";
    }
    return 0;
}