#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s, v1, v2, t1, t2, f1, f2;
    scanf("%I64d %I64d %I64d %I64d %I64d", &s, &v1, &v2, &t1, &t2);

    f1 = t1 + t1 + (v1 * s);
    f2 = t2 + t2 + (v2 * s);

    if(f1 == f2)
        printf("Friendship\n");

    else if(f1 < f2)
        printf("First\n");

    else
        printf("Second\n");

    return 0;
}
