#include<bits/stdc++.h>
using namespace std;

int n = 5, coin[] = {1, 5, 10, 25, 50}, amount;
int dp[50][7500];

int rec(int now, int money)
{
    if(now >= 5)
    {
        if(money == 0)
            return 1;
        else
            return 0;
    }

    if(dp[now][money] == -1)
    {
        int ret1 = 0, ret2 = 0;

        if(money - coin[now] >= 0)
            ret1 = rec(now, money - coin[now]);

        ret2 = rec(now+1, money);

        dp[now][money] = ret1 + ret2;
    }

    return dp[now][money];
}

int main()
{

    memset(dp, -1, sizeof (dp));
    while(scanf("%d", &amount) != EOF)
    {
        printf("%d\n", rec(0,amount));
    }

    return 0;
}

