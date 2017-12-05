#include<stdio.h>
int main()
{
    long long int t, x, y, z, c, temp, flag, l, m, n;
    scanf("%lld", &t);
    for(c = 1; c <= t; ++c)
    {
        flag = 0;
        scanf("%lld %lld %lld", &x, &y, &z);
        l = x+y;
        m = x+z;
        n = y+z;
        if((l > z) && (m > y) && (n > x))
            flag = 1;
        if(flag == 0)
            printf("Case %lld: Invalid\n", c);
        else if(x == y && y == z)
            printf("Case %lld: Equilateral\n", c);
        else if(x == y || x == z || y == z)
            printf("Case %lld: Isosceles\n", c);
        else
            printf("Case %lld: Scalene\n", c);
    }

    return 0;
}
