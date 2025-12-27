#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> mat;
    int val;
    for(int i=0; i<5; i++) {
        vector<int> line;
        for(int j=0; j<5; j++) {
            cin >> val;
            line.push_back(val);
        }
        mat.push_back(line);
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(mat[i][j] == 1) {
                if(i+1 == 3 && j+1 == 3) {
                    cout << 0;
                }else {
                    cout << abs(i+1 - 3) + abs(j+1 - 3);
                }
            }
        }
    }
    return 0;
}