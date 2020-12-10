#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a{-1}, b{-1};

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') 
        a.push_back(i);
        else 
        b.push_back(i);
    }
    a.push_back(n);
    b.push_back(n);
 
    if (min(a.size(), b.size()) <= k+2) 
    {
        cout << n << endl;
    } 
    else 
    {
        int ans = 0;
        for (int i = 0; i + k + 1 < a.size(); ++i) {
            ans = max(ans, a[i+k+1] - a[i] - 1);
        }
 
        for (int i = 0;i + k + 1 < b.size(); ++i) {
            ans = max(ans, b[i+k+1] - b[i] - 1);
        }
 
        cout << ans << endl;
    }
    


}
