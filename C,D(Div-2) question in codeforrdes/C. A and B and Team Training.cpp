#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n,m;
    cin>>n>>m;

    int ans=0;
    if(n>=2*m)
    {
        cout<<m<<endl;
        return 0;
    }
    else if(m>=2*n)
    {
        cout<<n<<endl;
        return 0;
    }
    else
    {
        while(n!=m)
        {
            if(n<m)
            {
                ans++;
                m-=2;
                n-=1;
            }
            else{
                ans++;
                n-=2;
                m-=1;
            }

        }
        cout<<ans+(n+m)/3<<endl;
    }

}
