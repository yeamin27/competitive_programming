#include<stdio.h>
int main()
{
    int a, b, ans;
    while((scanf("%d %d", &a, &b)) && (a != -1) && (b != -1))
    {
        ans = a - b;
        ans = abs(ans);
        if(ans <= 50)
            printf("%d\n", ans);
        else
        {
            ans = 100 - ans;
            printf("%d\n", ans);
        }
    }
    return 0;
}
