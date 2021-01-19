#include <bits/stdc++.h>
#define maxn 1000010
using namespace std;
int n,pre[maxn << 1],xx;
 
int main()
{
	scanf("%d",&n);
	memset(pre,0,sizeof(pre));
	for(int i=0;i<n;i++){
		scanf("%d",&xx);
		pre[xx] ++;
	}
	int ans = 0;
	for(int i=0;i<1000050;i++){
		pre[i+1] += (pre[i] / 2);
		ans += (pre[i] % 2);
	}
	printf("%d\n",ans);
	return 0;
}