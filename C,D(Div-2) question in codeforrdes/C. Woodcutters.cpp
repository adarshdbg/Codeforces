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

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n;
   cin>>n;
   vector<pair<int,int>>v;
   int i=0;
   for(i=0;i<n;i++)
   {
       int p,q;
       cin>>p>>q;
       
       v.push_back({p,q});
   }
   
   sort(begin(v),end(v));
    
    
   int ans=2;
   for( i=1;i<n-1;i++)
   {
       if((v[i].first - v[i-1].first)>v[i].second)
       ans++;
       else if((v[i+1].first - v[i].first)>v[i].second)
       {
           ans++;
           v[i]={v[i].first+v[i].second,v[i].second};
       }
   }
   cout<<min(n,ans)<<endl;
	return 0;
}