#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,p;
    bool flag=false;
    cin>>n>>p;
    string s;
    cin>>s;

    if(p>(n/2))
    {
        reverse(s.begin(),s.end());
        p=n-p+1;
    }
    p--;
    int l=0,r=n/2;
    for(int i=0;i<(n/2);i++)
    {
        if(s[i]!=s[n-i-1])
        {
            l=i;
            flag=true;
            break;
        }
    }
    for(int i=(n/2)-1;i>=0;i--)
    {
        if(s[i]!=s[n-i-1])
        {
            r=i;
            flag=true;
            break;
        }
    }
    //cout<<l<<" "<<r<<" "<<p<<endl;
    int ans=0;
    if(p<=l)
    {
        for(int i=p;i<=r;i++)
        {
            ans+=min(abs(s[i]-s[n-i-1]),26-abs(s[i]-s[n-i-1]));
        }
        ans+=(r-p);
    }
    else if(p>=r)
    {
        for(int i=p;i>=l;i--)
        {
            ans+=min(abs(s[i]-s[n-i-1]),26-abs(s[i]-s[n-i-1]));
        }
        ans+=(p-l);
    }
    else
    {
        for(int i=p;i<=r;i++)
        {
            ans+=min(abs(s[i]-s[n-i-1]),26-abs(s[i]-s[n-i-1]));
            //ans++;
        }
        for(int i=p-1;i>=l;i--)
        {
            ans+=min(abs(s[i]-s[n-i-1]),26-abs(s[i]-s[n-i-1]));
        }
        ans+=min(2*r-p-l,p+r-2*l);
    }
    if(flag)
    cout<<ans<<endl;
    else
    cout<<0<<endl;


}
