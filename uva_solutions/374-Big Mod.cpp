#include<bits/stdc++.h>
using namespace std;

#define i64 long long
i64 m;

i64 bigmod(i64 b, i64 p)
{
    if(p == 0) return 1;
	if(p % 2 == 0)
	{
		i64 ret = bigmod(b, p/2);
		return ((ret % m) * (ret % m)) % m;
	}
	else return ((b % m) * (bigmod(b, p-1) % m)) % m;
}

int main()
{
    i64 b, p;
    while(scanf("%lld %lld %lld", &b, &p, &m) != EOF)
    {
        printf("%lld\n", bigmod(b, p));
    }

    return 0;
}
