#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i=0;
    bool flag = false;
    if(s.length() < 2) {
        cout << "NO";
        return 0;
    }
    int c=0;
    while(i<s.length()) {
        if(s[i] == (7+'0') || s[i] == ('0' + 4)) {
            c++;
        }
        i++;
    }

    if(c != 4 && c != 7) {
        cout << "NO";
    }else{
        cout << "YES";
    }


    return 0;
}