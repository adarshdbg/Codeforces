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

signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    vector<int>prime(n+1,true);
    prime[0]=0,prime[1]=0;

    for(int i=2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (prime[i]) {
            int q = 1;
            while (q <= n / i) {
                q *= i;
                ans.push_back(q);
            }
        }
    }
    cout << ans.size() << endl;
    for (int i : ans) {
        cout<<i<<" ";
    }
	return 0;
}