#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin>>n>>q;

    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    vector<int>a(n);
    
    while(q--)
    {
       int l,r;
       cin>>l>>r;
       l--;
       r--;
       a[l]++;
       if (r<n-1)
            a[r+1]--;
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=a[i];
       a[i]=sum;
    }
    sort(v.begin(),v.end());
    sort(a.begin(),a.end());
     
     sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(a[i]*1ll*v[i]);
    }

    cout<<sum<<endl;



}
