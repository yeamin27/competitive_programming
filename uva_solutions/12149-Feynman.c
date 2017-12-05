#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld", &n) && n != 0)
    {
        n = n * (n+1) * (2*n+1)/6;
        printf("%lld\n", n);
    }

    return 0;
}
