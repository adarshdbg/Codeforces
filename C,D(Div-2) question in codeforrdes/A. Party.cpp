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
int dfs(int i,vector<vector<int>>&a)
{
    int l=1;
    for(int &j:a[i])
    {
         l=max(l,dfs(j,a)+1);
    }
    return l;
}
void solve()
{
    int n;
    cin>>n;
    
    vector<vector<int>>v(n);
    vector<int>in1(n,0);
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        if(p!=-1)
        v[p-1].push_back(i),in1[i]++;
    }
    
    int res=1;
    
    for(int i=0;i<n;i++)
    {
        if(in1[i]==0)
        {
           // cout<<i<<" ";
            res=max(res,dfs(i,v));
        }
    }
    
    cout<<res<<endl;
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