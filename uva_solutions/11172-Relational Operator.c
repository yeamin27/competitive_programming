#include<stdio.h>
int main()
{
    int t;
    long long x, y;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld %lld", &x, &y);
        if(x > y)
            printf(">\n");
        else if(x < y)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}
