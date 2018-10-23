#include<bits/stdc++.h>
using namespace std;

int dp[105][105], arr[105], n, w, k;
 
int call(int now, int cnt)
{      
    if(now == n || cnt == k)
        return 0;
       
    if(dp[now][cnt] != -1)
        return dp[now][cnt];
       
    int &res = dp[now][cnt];
   
    int i, f = 1, lim = arr[now]+w;
    for(i = now+1; i<n && arr[i]<=lim; ++i)
        ++f;
    f += call(i, cnt+1);
    res = max(f, call(now+1, cnt));
   
    return res;
}
 
int main()
{
    int t, x;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; ++tc)
    {
        memset(dp, -1, sizeof dp);
       
        scanf("%d %d %d", &n, &w, &k);
        for(int i = 0; i < n; ++i)
            scanf("%d %d", &x, &arr[i]);
           
        sort(arr, arr+n);
        int mx = call(0, 0);
        printf("Case %d: %d\n", tc, mx);
    }
   
    return 0;
}
