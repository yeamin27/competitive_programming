#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int a, res = 1e9;
    for(int i = 1; i <= n; ++i)
    {
        scanf("%d", &a);
        if(a != 0 && a <= k)
            res = min(res, abs(i-m));
    }

    printf("%d", 10*res);


    return 0;
}
