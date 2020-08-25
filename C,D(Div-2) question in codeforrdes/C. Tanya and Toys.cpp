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
    int n,m;
    cin>>n>>m;

    vector<int>a(n);
    set<int>s;
    for(int i=0;i<n;i++)
    cin>>a[i],s.insert(a[i]);

    sort(begin(a),end(a));
    int i=1;
    vector<int>ans;
    while(m>=i)
    {
        if(s.find(i)!=s.end())
        i++;
        else
        {
            m-=i;
            ans.push_back(i);
            i++;

        }
    }
     cout<<ans.size()<<endl;
     for(auto& i:ans)
     cout<<i<<" ";
    
}