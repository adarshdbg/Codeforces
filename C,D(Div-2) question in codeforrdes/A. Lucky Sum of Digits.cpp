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

    for(int i=0;i<=n/4;i++)
    {
        int b=(n - 4*i)/7;
        if(4*i + 7*b == n)
        v.push_back({i,b});
    }
     
     if(v.size()==0)
     {
         cout<<-1<<endl;
         return 0;
     }
    sort(begin(v),end(v),[](auto &i,auto& j)
    {
        if(i.first+i.second == j.first+j.second)
        return i.first<j.first;

        return i.first+i.second < j.first+j.second;
    });
  
    string s;
    s=string(v[0].first,'4')+string(v[0].second,'7');

    cout<<s<<endl;
	return 0;
}