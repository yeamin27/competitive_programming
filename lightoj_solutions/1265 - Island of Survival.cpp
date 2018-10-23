#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, tt, dd;
	scanf("%d", &t);
	for(int tc = 1; tc <= t; ++tc)
	{		
		scanf("%d %d", &tt, &dd);
		printf("Case %d: ", tc);
		if(tt == 0)
			printf("1\n");
		else if(tt&1)
			printf("0\n");
		else
			printf("%lf\n", (double) 1 / (tt+1));
	}
	
	return 0;
}
