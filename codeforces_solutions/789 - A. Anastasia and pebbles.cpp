#include<bits/stdc++.h>
using namespace std;

long long w[100000];

int main()
{
    long long n, k, day = 0, temp;

    scanf("%I64d %I64d", &n, &k);
    for(int i = 0; i < n; ++i)
        scanf("%d", &w[i]);

    for(int i = 0; i < n; ++i)
    {
        temp = w[i] / k;
        if(temp * k != w[i])
            day += 1;

        day += temp;
    }
    temp = day / 2;
    if(temp * 2 != day)
        temp += 1;
    cout << temp << endl;

    return 0;
}
