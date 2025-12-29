#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int onesIndx;
        int thirdIndx;

        for(int i=0; i<s.length(); i++) {
            if(s[i] == '1') {
                onesIndx = i;
            }
            if(s[i] == '3') {
                thirdIndx = i;
            }
        }

        if(onesIndx < thirdIndx) {
            cout << "13\n";
        }else {
            cout << "31\n";
        }
    }
    return 0;
}