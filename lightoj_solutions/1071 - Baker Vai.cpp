/*
Idea:
find two distinct(non overlapping) path from (0,0) to (n-1, n-1)
 
Here move can be of 3 types - 
  1: Moving the left path one cell to the right
  2: Moving the right path one cell to the right
  3: Moving both the path one cell to the down

*/

#include<bits/stdc++.h>
using namespace std;

#define MAX 105
int n, m;
long arr[MAX][MAX];
long dp[MAX][MAX][MAX];

int main()
{
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; ++tc)
    {
		cin >> n >> m;
		for(int i = 1; i <= n; ++i)
			for(int j = 1; j <= m; ++j)
				scanf("%ld", &arr[i][j]);
				
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; ++i)
		{ 
			// First consider only the down movement
			for(int j = 1; j < m; ++j)
				for(int k = j+1; k <= m; ++k)
					dp[i][j][k] = dp[i-1][j][k] + arr[i][j] + arr[i][k];
	 
			// Now, move the left path only
			for(int j = 1; j < m; ++j)
				for(int k = j+1; k <= m; ++k)
					dp[i][j][k] = max(dp[i][j][k], dp[i][j-1][k] + arr[i][j]);
	 
			// Finally, move the right path only
			for(int j = 1; j < m; ++j)
				for(int k = j+1; k <= m; ++k)
					dp[i][j][k] = max(dp[i][j][k], dp[i][j][k-1] + arr[i][k]);
		}
				
		cout << "Case " << tc <<": " << dp[n][m-1][m] << endl;
    }
    return 0;
}
