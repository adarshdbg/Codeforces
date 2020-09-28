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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++)
    {
        while(a[i]%2==0)
            a[i]/=2;
       while(a[i]%3==0)
            a[i]/=3;  
    }

    for(int i=0;i<n-1;i++)
    if(a[i]!=a[i+1])
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
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