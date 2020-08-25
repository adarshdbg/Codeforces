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

signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    string p="";
    for(auto &i:s)
    {
        if(i=='0' || i=='1')
        continue;
        else
        {
            if(i=='2' || i=='3' || i=='5' || i=='7')
            p+=i;
            else if(i=='4')
            p+="223";
            else if(i=='6')
            p+="35";
            else if(i=='8')
            p+="2227";
            else
            p+="2337";

        }
    }

    sort(begin(p),end(p),greater<char>());
    cout<<p<<endl;
	return 0;
}