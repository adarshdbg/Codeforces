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
    int n,m,k;
    cin>>n>>m>>k;
     int a=-1,b,s=0;
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char p;
            cin>>p;
            v[i][j]=p;

            if(p=='.' && a==-1)
            {
                a=i,b=j;
            }
             if(p=='.')
            {
                s++;
            }
        }
    }
     
    k=s-k;
     
    queue<pair<int,int>>q;
    vector<vector<bool>>vis(n,vector<bool>(m,false));

       vector<pair<int,int>>d;
    d.push_back({-1,0});
    d.push_back({1,0});
    d.push_back({0,-1});
    d.push_back({0,1});

    q.push({a,b});
    vis[a][b]=true;
 
    k--;
    while(!q.empty())
    {
        auto i=q.front();

        q.pop();
        if(k==0)
         break;
         for(auto h:d)
         {
             if(i.first+(h.first)>=0 && i.first+(h.first)<n && i.second+(h.second)>=0 && i.second+(h.second)<m && !vis[i.first+(h.first)][i.second+(h.second)] && v[i.first+(h.first)][i.second+(h.second)]=='.')
             q.push({i.first+(h.first) , i.second+(h.second)}),vis[i.first+(h.first)][i.second+(h.second)]=true,k--;

             if(k==0)
             break;
         }
        if(k==0)
        break;


        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j] && v[i][j]=='.')
            v[i][j]='X';
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }

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