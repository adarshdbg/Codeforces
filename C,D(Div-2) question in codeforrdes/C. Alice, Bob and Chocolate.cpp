#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int i=0,j=n-1;
    int alice=0,bob=0;
    int p=0,q=0;
    while(i<=j)
    {
        if(p==q && i==j)
        alice++,i++;
        else
        {
            if(p>q)
            {
                bob++;
                q+=v[j--];
            }
            else if(q>p)
            {
                 alice++;
                 p+=v[i++];
            }
            else
            {
                bob++;
                q+=v[j--];
                alice++;
                p+=v[i++];
            }
            
        }
    }
    cout<<alice<<" "<<bob<<endl;

}
