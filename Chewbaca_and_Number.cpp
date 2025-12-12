#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;  //992098
    cin >> s;
    long n = s.size();  

    for(int i=0; i<n; i++) {
        if((s[i] - '0') >= 5) {
            int r = (9 - (s[i] - '0')); 
            s[i] = r + '0';
        }
    }

    if(s[0] - '0' == 0) {
        s[0] = '9';
    }

    cout << s;
    return 0;
}