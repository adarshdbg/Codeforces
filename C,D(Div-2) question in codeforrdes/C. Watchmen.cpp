#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
	long long ans = 0;
	cin >> n;
	map<pair<int,int>,int> p;
	map<int,long long> X,Y;
	while(n--){
		int x,y;
		cin >> x >> y;
		++X[x], ++Y[y];
		ans -= p[{x,y}]++;
	}
	for(auto i:X) ans += i.second*(i.second-1)/2;
	for(auto i:Y) ans += i.second*(i.second-1)/2;
	cout << ans << endl;

}
