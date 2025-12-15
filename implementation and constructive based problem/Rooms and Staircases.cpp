#include <bits/stdc++.h>
using namespace std;

void myWrongSolution(string s, int n)
{
    int k;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            k = i + 1;
            break;
        }
    }

    vector<int> ans;

    int mid = (1 + n) / 2;
    if (k >= mid)
    {
        // ans += to_string(k+k) + " ";
        ans.push_back(k + k);
    }
    else
    {
        // ans += to_string(k + (n-k)) + " ";
        ans.push_back(k + (n - k));
    }

    reverse(s.begin(), s.end());

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            k = i + 1;
            break;
        }
    }

    mid = (1 + n) / 2;
    if (k >= mid)
    {
        // ans += to_string(k+k) + " ";
        ans.push_back(k + k);
    }
    else
    {
        // ans += to_string(k + (n-k)) + " ";
        ans.push_back(k + (n - k));
    }

    for (int i = 0; i < ans.size(); i += 2)
    {
        cout << max(ans[i], ans[i + 1]) << "\n";
    }
}

void correctLogic(string s, int n) {
    int ans = n;
    int c = 0;

    for(int i=0; i<n; i++) {
        c++;
        if(s[i] == '1') {
            ans = max(ans,(i+1)*2);
            c++;
        }
    }

    ans = max(ans,c);

    reverse(s.begin(), s.end());


    c = 0;
    for(int i=0; i<n; i++) {
        c++;
        if(s[i] == '1') {
            ans = max(ans,(i+1)*2);
            c++;
        }
    }

    ans = max(ans,c);

    cout << ans << "\n";

}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // myWrongSolution(s, n);
        correctLogic(s,n);
    }
    return 0;
}