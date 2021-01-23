#include <bits/stdc++.h>
using namespace std;

const int maxN = 300 * 1000 + 10; 
set<int> curr, b[maxN]; 
int a[maxN];

int main() { 
	ios::sync_with_stdio(false); cin.tie(0); 

	int n,q; cin >> n >> q; 
	int en = 0; 
	for( int i = 0 ; i < q ; i++ ) { 
		int t; cin >> t; 
		if( t == 1 ) { 
			int x;
			cin >> x; 
			x--; 
			a[x] = en; 
			curr.insert( en ); 
			b[x].insert( en ); 
			en++; 
		} else if( t == 2 ) { 
			int x; 
			cin >> x; 
			x--; 
			for( auto y : b[x] ) 
				curr.erase( y ); 
			b[x].clear(); 
		} else { 
			int t;
			cin >> t; 
			while( curr.size() && *curr.begin() < t ) { 
				b[a[*curr.begin()]].erase( *curr.begin() ); 
				curr.erase(curr.begin()); 
			}
		}
		cout << curr.size() << '\n';
	}
}

