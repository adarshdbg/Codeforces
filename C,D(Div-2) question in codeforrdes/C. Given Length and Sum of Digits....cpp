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
bool can(int i,int k)
{
    return k>=0 && i*9>=k;
}

void solve()
{
    int m,s;
    cin>>m>>s;
   if(m==1 && s==0)
   {
       cout<<0<<" "<<0<<endl;
       return;
   }

    int k=s;
    string s1="";
    for(int i=m;i>0;i--)
    {
        for(int j=0;j<=9;j++)
        {
            if(i==m)
            {
                if(j>0 && can(i-1,k-j))
                {
                    s1+=('0'+j);
                    k=k-j;
                    break;
                }
            }
           else if(s1.size()>0 && can(i-1,k-j))
            {
                 s1+=('0'+j);
                 k=k-j;
                 break;
            }
        }
    }
   // cout<<s1<<" ";
    if(s1.size()==0)
    s1="-1";

    k=s;
    string s2;
    for(int i=m;i>0;i--)
    {
        for(int j=9;j>=0;j--)
        {
            if(i==m)
            {
                if(j>0 && can(i-1,k-j))
                {
                    s2+=('0'+j);
                    k=k-j;
                    break;
                }
            }
           else if(s2.size()>0 && can(i-1,k-j))
            {
                 s2+=('0'+j);
                 k=k-j;
                 break;
            }
        }
    }
    if(s2.size()==0)
    s2="-1";

    cout<<s1<<" "<<s2<<endl;

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