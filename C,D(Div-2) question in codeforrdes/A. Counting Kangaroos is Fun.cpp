#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int num;
	scanf("%d",&num);
	vector<int>vec;
	for(int i=0;i<num;i++)
	{
		int zan;
		scanf("%d",&zan);
		vec.push_back(zan);
	}
	sort(vec.begin(),vec.end());
	int pt=num/2;
	int ans=num;
	for(int i=0;i<num/2;i++)
	{
		for(;;)
		{
			if(vec[i]*2<=vec[pt])
			{
				ans--;
				pt++;
				break;
			}
			else
			{
				pt++;
			}
			if(pt==num)
			{
				break;
			}
		}
		if(pt==num)
		{
			break;
		}
	}
	printf("%d\n",ans);
}