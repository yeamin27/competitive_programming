#include <stdio.h>
#include<math.h>

int arr[1010], prime[1010], nprime;
void sieve(int n)
{
    int i, j, lim = sqrt(n+1);
    arr[1] = 1;
    for(i = 4; i <= n; i += 2)
        arr[i] = 1;

    prime[nprime++] = 1;
    prime[nprime++] = 2;

    for(i = 3; i <= n; i += 2)
    {
        if(!arr[i])
        {
            prime[nprime++] = i;
            if(i <= lim)
            {
                for(j = i*i; j <= n; j += i*2)
                {
                    arr[j] = 1;
                }
            }
        }
    }

    return;
}

int main()
{
    int n, c, i;

    sieve(1010);

    while(scanf("%d %d", &n, &c) == 2)
    {
        printf("%d %d:", n, c);
        int list[1001], lt = 0;

        for(i = 0; i < nprime; i++)
        {
            if(prime[i] <= n)
                list[lt++] = prime[i];
            else
                break;
        }

        if(lt&1)
            c = c*2 - 1;
        else
            c = c*2;

        if(c > lt)
            c = lt;

        for(i = lt/2 - c/2; c--; i++)
            printf(" %d", list[i]);

        puts("\n");
    }
    return 0;
}
