#include<bits/stdc++.h>
using namespace std;
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define bits_count __builtin_popcountll
#define endl '\n'
#define ld long double
#define fi first
#define se second
#define pb push_back
#define mk make_pair
#define pr pair<int,int>
void solve()
{
    int MOD=1e9+7;
  int n;
  cin>>n;
  int zD = 1;
int zABC = 0;
for (int i = 1; i <= n; i++) {
	int nzD = zABC * 3LL % MOD;
	int nzABC = (zABC * 2LL + zD) % MOD;
	zD = nzD;
	zABC = nzABC;
}
cout << zD;
}
signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t=1;
     //cin>>t;
     while(t--)
     {
         solve();
     }
	return 0;
}