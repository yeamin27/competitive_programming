#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int n, x;
ll dp[30][160];
ull count(int nn, int total)
{
	if(nn == 0 && total >= x)
		return 1;
	if(nn == 0 && total < x)
		return 0;
	if(dp[nn][total] == -1)
	{		
		ull ans = 0;
		for(int i = 1; i < 7; ++i)
			ans += count(nn-1, total+i);
		dp[nn][total] = ans;
	}
	return dp[nn][total];
}

int main()
{
	ull cnt, comb;
	int t;
	
	scanf("%d", &t);
	for(int tc = 1; tc <= t; ++tc)
	{
		scanf("%d %d", &n, &x);
		memset(dp, -1, sizeof dp);
		cnt = count(n, 0);
		comb = pow(6*1.0, n*1.0);
		
		ull g = __gcd(cnt, comb);
		printf("Case %d: %llu",tc, cnt/g);
		if(comb/g > 1)
			printf("/%llu", comb/g);
		printf("\n"); 
	}
					

	return 0;
}
