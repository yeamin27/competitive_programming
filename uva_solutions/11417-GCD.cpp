#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b);

int main()
{
    int n, i, j;
    long long g;
    while(scanf("%d", &n) && n)
    {
        g = 0;
        for(i = 1; i < n; ++i)
            for(j = i + 1; j <= n; ++j)
            {
                g += gcd(i,j);
            }

        printf("%d\n", g);
    }

    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return a;

    else if (b == 0)
        return b;

    else
    {
        int t;

        while (b != 0)
        {
            t = b;
            b = (a - (a / b) * b);
            a = t;
        }
        return a;
    }
}
