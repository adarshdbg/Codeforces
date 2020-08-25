#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;

    if(m>=n-1 && m<=2*(n+1))
    {
        string s;


        while(n!=0 && m!=0)
        {
            if(m==2*(n+1))
            {
                s+="11";
                for(int g=0;g<n;g++)
                s+="011";
                cout<<s<<endl;
                return 0;
            }
            else if(m==n)
            {
                s+="10";
                m--,n--;
            }
            else if(m==n-1)
            {
                s+='0';
                n--;
                
            }
            else
            {
               s+="101";
               m-=2;
               n--;
            }
        }
        for(int b=0;b<m;b++)
        s+="1";
        
        cout<<s<<endl;
        
    }
    else
    cout<<-1<<endl;

}
