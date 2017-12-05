#include<stdio.h>
int main()
{
    int n, k, p, t, ans, i;
    scanf("%d", &t);
    for(i = 1; i <= t; ++i)
    {
        scanf("%d %d %d", &n, &k, &p);
        ans = k + p;
        ans = ans % n;
        if(ans == 0)
            ans = n;
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
