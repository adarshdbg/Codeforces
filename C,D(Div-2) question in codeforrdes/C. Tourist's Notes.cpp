#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> d(M), h(M);
    for(int i=0;i<M;i++) cin >> d[i] >> h[i];
    int ans = max(h[0] + d[0] - 1, h[M - 1] + (N - d[M - 1]));
    bool ok = true;
    for(int i=0;i<M-1;i++) {
        ok &= abs(h[i] - h[i + 1]) <= d[i + 1] - d[i];
        ans = max(ans, max(h[i], h[i + 1]) + (d[i + 1] - d[i] - abs(h[i] - h[i + 1])) / 2);
    }
    if (!ok) cout << "IMPOSSIBLE\n";
    else cout << ans << '\n';

    return 0;
}