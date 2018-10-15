#include<bits/stdc++.h>
using namespace std;

long long h[1000005];

int main()
{
    long long n, m, x, y, pos = 1;
    long long k;

    scanf("%I64d %I64d %I64d", &n, &m, &k);
    for(long long i = 0; i < m; ++i)
    {
        scanf("%I64d", &x);
        h[x] = 1;
    }

    for(long long i = 0; i < k; ++i)
    {
        scanf("%I64d %I64d", &x, &y);

        if(pos == x && !h[x])
            pos = y;
        else if(pos == y && !h[y])
            pos = x;
    }

    printf("%I64d\n", pos);

    return 0;
}
