#include<bits/stdc++.h>
using namespace std;
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
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
    int n,k;
    cin>>n>>k;

    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        v[i]={b[i]-a[i],i};
    }
    sort(begin(v),end(v));
   
    int sum=0;
    for(int i=n-1;i>=n-k;i--)
    {
        sum+=(a[v[i].second]);
        
    }
     for(int i=n-k-1;i>=0;i--)
    {
        if(a[v[i].second]<=b[v[i].second])
        sum+=a[v[i].second];
        else
        sum+=b[v[i].second];
       // cout<<sum<<" ";
    }

    cout<<sum<<endl;
}