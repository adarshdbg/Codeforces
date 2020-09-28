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
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    cin>>a[i],b[i]=a[i];

    sort(begin(a),end(a));
    sort(begin(b),end(b));
    
    
    for(int i=n-2;i>=0;i--)
    {
         b[i]=(b[i+1]+b[i]);
    }
    // for(auto &i:a)
    // cout<<i<<" ";
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        //cout<<a[i]<<" "<<b[i]<<" ";
        sum+=(b[i]+a[i]);
    }

    cout<<sum+a[n-1]<<endl;
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