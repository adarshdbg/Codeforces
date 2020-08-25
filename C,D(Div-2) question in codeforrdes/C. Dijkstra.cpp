#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
void path(vector<int>&par,int i)
{
    if(i==-1)
    return;
    path(par,par[i]);
    cout<<i<<" ";
}
signed main() {
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>>v(n+1);

    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;

    vector<int>dis(n+1,LLONG_MAX);
    vector<int>par(n+1,-1);
    p.push({0,1});
    dis[1]=0;
    while(!p.empty())
    {
        auto i=p.top();
        p.pop();

        for(auto &j:v[i.second])
        {
            if(dis[i.second]+j.second < dis[j.first])
            {
                dis[j.first]=dis[i.second]+j.second;
                par[j.first]=i.second;
                p.push({dis[j.first],j.first});
            }
        }

    }

    // for(int i=1;i<=n;i++)
    //  cout<<dis[i]<<" ";
    //  cout<<endl;
    if(dis[n]==LLONG_MAX)
    cout<<"-1"<<endl;
    else
    path(par, n);
 


}
