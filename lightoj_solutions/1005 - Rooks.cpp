#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll call(int n, int m, int k)
{		
	if(k > n || k > m)
		return 0;
		
	else if(k == 0)
		return 1;
		
	else if(m == 1)
		return n;
		
	else
		return n * call(n-1, m-1, k-1) + call(n, m-1, k);
}

int main()
{
	int t, n, k;
	scanf("%d", &t);
	for(int tc = 1; tc <= t; ++tc)
	{		
		scanf("%d %d", &n, &k);
		printf("Case %d: %lld\n", tc, call(n, n, k));
	}
	
	return 0;
}
