#include <bits/stdc++.h>
using namespace std;

int main() {
    string inputStr;
    cin >> inputStr;  //AS
    cin.ignore();  // <-- clears leftover newline
    string cardsInHand;  //2D 4G 3A
    getline(cin, cardsInHand);
    
    bool flag = false;

    for(int i=0; i<cardsInHand.size(); i++) {
        if(cardsInHand[i] == inputStr[0] || cardsInHand[i] == inputStr[1]) {
            flag = true;
            cout << "YES";
            break;
        }
    }

    if(!flag) {
        cout << "NO";
    }
    return 0;
}