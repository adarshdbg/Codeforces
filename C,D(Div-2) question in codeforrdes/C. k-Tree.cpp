#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,d;
    int mod=1000000007;
    cin>>n>>k>>d;

    vector<vector<int>>dp(n+1,vector<int>(2,0));

    dp[0][0]=1;
    dp[0][1]=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i-j<0)
            break;
            if(j<d)
            {
                dp[i][0]+=(dp[i-j][0]%mod);
                dp[i][0]%=mod;
                dp[i][1]+=(dp[i-j][1]%mod);
                dp[i][1]%=mod;
            }
            else
            {
                dp[i][1]+=((dp[i-j][0]%mod + dp[i-j][1]%mod)%mod);
                dp[i][1]%=mod;
            }
        }
    }
    cout<<dp[n][1];

}
