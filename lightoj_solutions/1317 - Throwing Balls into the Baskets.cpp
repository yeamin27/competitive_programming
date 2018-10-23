#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, m, k;
	double p;
	scanf("%d", &t);
	for(int tc = 1; tc <= t; ++tc)
	{		
		scanf("%d %d %d %lf", &n, &m, &k, &p);
		printf("Case %d: %lf\n", tc, (double)n*k*p);
	}
	
	return 0;
}
