#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int choco[n];
    for(int i=0; i<n; i++) {  //3 2 5 4 10
        cin >> choco[i];
    }

    int mx = choco[n-1] + 1;  //9 3 4
    long long sum = 0;
    for(int i=n-1; i>=0; i--) {
        if(choco[i] < mx) {
            sum += choco[i];
            mx = choco[i] - 1;
        }else if(mx > 0) {
            sum += mx;
            mx--;
        }
    }
    cout << sum;


    return 0;
}