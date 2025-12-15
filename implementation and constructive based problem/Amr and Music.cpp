#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  //the number of instruments 
    int k;  // number of k days
    cin >> n;
    cin >> k;
    int arr[n]; // representing number of days required to learn the i-th instrument.
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    //storing val with its index as a pair so once it get sorted by val 
    //we know their correspoinding index.
    vector<pair<int,int>> v;
    int i = 1;
    for(auto &it : arr) {
        v.push_back({it,i});
        i++;
    }
    sort(v.begin(), v.end());

    int c = 0;
    string ans = "";
    for(auto &it : v) {
        if(it.first <= k ) {
            c++;
            // cout << it.second << " ";
            ans += to_string(it.second) + " ";
            k -= it.first;
        }
    }

    cout << c << "\n";
    cout << ans;

    return 0;
}