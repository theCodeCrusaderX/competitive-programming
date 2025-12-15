#include <bits/stdc++.h>
using namespace std;

//my logic
string toCheckPalindrome(string s) {
    int begin = 0;
    int end = s.size() - 1;
    while(begin < end) {
        if((s[begin] - 1) == (s[end] - 1) || 
            (s[begin] - 1) == (s[end] + 1) ||
            (s[begin] + 1) == (s[end] - 1) ||
            (s[begin] + 1) == (s[end] + 1)
        ) {
            
        }else {
            return "NO";
        }
        begin++;
        end--;
    }
    return "YES";
}

// sir logic
string solve(string s) {
    int begin = 0;
    int end = s.size() - 1;
    while(begin < end) {
        if(s[begin] != s[end] && abs(s[begin] - s[end]) != 2) {
            return "NO";
        }
        begin++;
        end--;
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
    return 0;
}