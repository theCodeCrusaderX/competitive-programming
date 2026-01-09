#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {  //O(log b)
    //base case
    if(b==0) {
        return a;
    }else {
        //recusion
        gcd(b,a%b);
    }
}

int main() {
    int a,b;
    cin >> a >> b;

    cout << "gcd of " << a <<  "," <<  b << " is " << gcd(a,b) << "\n";

    //as a*b = lcm(a,b)*gcd(a,b)
    cout << "lcm of " << a <<  "," <<  b << " is " << (a/gcd(a,b)*b);

    return 0;
}