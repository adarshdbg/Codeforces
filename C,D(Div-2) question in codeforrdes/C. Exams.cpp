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
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       v.push_back({a,b});
   }
   sort(begin(v),end(v));
   int ans=min(v[0].first,v[0].second);
   for(int i=1;i<n;i++)
   {
       if(v[i].second>=ans)
       ans=v[i].second;
       else
       ans=v[i].first;

   }
   cout<<ans<<endl;
	return 0;
}