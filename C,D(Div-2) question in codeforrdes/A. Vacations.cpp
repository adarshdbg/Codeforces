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

    vector<int>dp(n);

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(a[i]==0)
            dp[i]=1;
        }
        else
        {
            if((a[i]==a[i-1] && a[i]!=3)|| a[i]==0)
            dp[i]=dp[i-1]+1,a[i]=0;
            else if(a[i]==3)
            {
                a[i]=a[i]-a[i-1];
                dp[i]=dp[i-1];
            }
            else
            dp[i]=dp[i-1];
           
        }
    }
    
    cout<<dp[n-1]<<endl;
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