#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;

    vector<bool>v(n+2);
    int no_of_dot=0,group=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            no_of_dot++;
            if(i==0 || s[i-1]!='.')
                group++;
            v[i+1]=true;
        }
    }
    while(m--)
    {
        int x;
        char ch;
        cin>>x>>ch;
        bool a=v[x],b=(ch=='.');
        if(a!=b)
        {
            if(b)
            {
                no_of_dot++;
            }
            else
                no_of_dot--;
            if(v[x-1] && v[x+1] && b)
                group--;
            if(v[x-1] && v[x+1] && !b)
                group++;
            if(!v[x-1] && !v[x+1] && !b)
                group--;
            if(!v[x-1] && !v[x+1] && b)
                group++;
        }
        v[x]=b;
        cout<<no_of_dot-group<<endl;
    }
}
