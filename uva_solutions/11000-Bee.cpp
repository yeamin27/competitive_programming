#include<bits/stdc++.h>
using namespace std;

long long n, dp[1010], sum[1010];

long long fibonacci(long long n)
{
    if(dp[n] != -1) return dp[n];


    return dp[n] = (fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
    memset(dp, -1, sizeof dp);
    dp[0] = 0;
    dp[1] = 1;
    fibonacci(1000);

    sum[0] = 1;

    for(int i = 1; i <= 1000; i++)
        sum[i] = sum[i-1] + dp[i+1];

    while(scanf("%lld", &n) && n != -1)
    {
        printf("%lld %lld\n", sum[n]-dp[n+1], sum[n]);
    }

    return 0;
}
