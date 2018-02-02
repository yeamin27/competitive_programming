#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x, t, c, sum = 0;
    double avg;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        sum += x;
    }
    avg = sum / (double) n;
    if(floor(avg+0.5) >= k)
        printf("0\n");
    else
    {
        t = n;
        while(floor(avg+0.5) < k)
        {
            sum += k;
            ++t;
            avg = sum / (double) t;
        }
        printf("%d\n", t - n);
    }

    return 0;
}
