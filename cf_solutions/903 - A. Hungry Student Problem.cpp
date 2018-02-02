#include<bits/stdc++.h>
using namespace std;

int n, val[5] = {3, 7}, x;
int dp[105][105];

int rec(int now, int cur)
{
    int ret1 = 0, ret2 = 0;

    if(cur == x)
        return 1;
    else if(now >= 2 && cur != x)
        return 0;

    if(dp[now][cur] == -1 )
    {
        if( cur + val[now] <= x)
            ret1 = rec(now, cur + val[now]);

        ret2 = rec(now+1, cur);

        dp[now][cur] = ret1 + ret2;
    }

    return dp[now][cur];
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
		cin >> x;
		memset(dp,-1,sizeof (dp));

		if(rec(0,0) > 0)
			cout << "YES" << endl;
			
		else
			cout << "NO" << endl;
	}

    return 0;
}
