#include<bits/stdc++.h>
using namespace std;
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define MAXN 100005
// I am questioning life and universe and 
// everything else after looking at all this.

ll n,ans = -1;
ll x[MAXN],y[MAXN],vis[MAXN];
vector<ll> gx[MAXN],gy[MAXN];

void dfs(ll u){
	if(vis[u]) return;
	vis[u] = 1;

	for(ll v:gx[x[u]]) dfs(v);
	for(ll v:gy[y[u]]) dfs(v);
}

int main(){
	FastRead;
	cin>>n;

	for(ll i=1;i<=n;i++){
		cin>>x[i]>>y[i];
		gx[x[i]].push_back(i);
		gy[y[i]].push_back(i);
	}

	for(ll i=1;i<=n;i++){
		if(!vis[i]){
			ans++;
			dfs(i);
		}
	}

	cout<<ans<<endl;
}
