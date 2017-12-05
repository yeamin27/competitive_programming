#include<stdio.h>
#include<math.h>
int main()
{
    int n, c = 0, ans, cnt;
    while(scanf("%d", &n) && n > 0)
    {
        ans = 1;
        cnt = 1;
        while(ans < n)
        {
            ans = pow(2, cnt);
            ++cnt;
        }
        if(ans >= n)
            --cnt;
        printf("Case %d: %d\n", ++c, cnt);
    }

    return 0;
}
