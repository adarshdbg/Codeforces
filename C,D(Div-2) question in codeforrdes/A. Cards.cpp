#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back({p,i+1});
    }

    sort(v.begin(),v.end());

    int i=0,j=n-1;
    while(i<j)
    {
       cout<<v[i++].second<<" "<<v[j--].second<<endl;
    }
 
    
    return 0;
 
}
