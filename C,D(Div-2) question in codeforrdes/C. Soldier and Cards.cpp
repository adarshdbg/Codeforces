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
void solve()
{
    int n;
    cin>>n;

    int k1;
    cin>>k1;
    deque<int>q1;
    for(int i=0;i<k1;i++)
    {
        int val;
        cin>>val;
        q1.push_back(val);
    }
    int k2;
    cin>>k2;
    deque<int>q2;
    for(int i=0;i<k2;i++)
    {
        int val;
        cin>>val;
        q2.push_back(val);
    }
    int i=0;
    while(i<150)
    {
        if(q1.size()==0)
        {
            cout<<i<<" "<<2<<endl;
            return;
        }
        if(q2.size()==0)
        {
            cout<<i<<" "<<1<<endl;
            return;
        }

        int p=q1.front();
        int q=q2.front();
        q1.pop_front();
        q2.pop_front();

        if(p>q)
        {
            q1.push_back(q);
            q1.push_back(p);
        }
        else
        {
             q2.push_back(p);
            q2.push_back(q);
        }
        i++;
    }
    cout<<-1<<endl;

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