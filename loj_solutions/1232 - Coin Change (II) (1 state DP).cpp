#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n, k, coin[100], dp[10005];
   
    scanf("%d", &t);
    for(int tc = 0; tc < t; ++tc)
    {
        scanf("%d %d", &n, &k);
       
        for(int i = 0; i < n; ++i)
            scanf("%d", &coin[i]);
           
        memset(dp, 0, sizeof dp);
        dp[0] = 1;
        for(int i = 0; i < n; ++i)
        {
            for(int j = coin[i]; j <= k; ++j)
            {
                dp[j] = (dp[j] + dp[ j-coin[i] ]) % 100000007;
            }
        }
           
        printf("Case %d: %d\n", tc+1, dp[k]);
    }
 
    return 0;
}
 
