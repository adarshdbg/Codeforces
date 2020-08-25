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
    int r,g,b;
    cin>>r>>g>>b;
    int arr[3]={r,g,b};
    sort(arr,arr+3);
    if(arr[0]+arr[1]<=arr[2]/2){
		cout<<arr[0]+arr[1];
	}
	else{
		cout<<((arr[0]+arr[1]+arr[2])/3);
	}
    
}