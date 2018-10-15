#include <bits/stdc++.h>
using namespace std;

int dp[10005][105];
int main()
{
    int t, n, k, coin[100];
 
    scanf("%d", &t);
    for(int tc = 0; tc < t; ++tc)
    {
        scanf("%d %d", &n, &k);
 
        for(int i = 1; i <= n; ++i)
            scanf("%d", &coin[i]);
 
        dp[0][0] = 1;
        for(int i = 0; i <= k; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                if(i-coin[j] >= 0)
                    dp[i][j] = (dp[ i-coin[j] ][j] + dp[i][j-1] ) % 100000007;
                else
                    dp[i][j] = dp[i][j-1];
            }
        }
 
        printf("Case %d: %d\n", tc+1, dp[k][n]);
    }
 
    return 0;
}
