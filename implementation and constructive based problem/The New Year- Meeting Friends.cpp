#include <bits/stdc++.h>
using namespace std;

int main() {
    int f1,f2,f3;
    cin >> f1 >> f2 >> f3;

    int res1 = abs(f2 - f1) + abs(f3 - f1);
    int res2 = abs(f1 - f2) + abs(f3 - f2);
    int res3 = abs(f2 - f3) + abs(f1 - f3);

    cout << min({res1, res2, res3});
     
    return 0;
}