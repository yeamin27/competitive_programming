#include<bits/stdc++.h>
using namespace std;

int arr[10000000];

void sieve(int n)
{
    int i, j, lim = sqrt(n+1);
    arr[1] = 1;
    for(i = 4; i <= n; i += 2)
        arr[i] = 1;

    for(i = 3; i <= n; i += 2)
    {
        if(!arr[i])
        {
            if(i <= lim)
                for(j = i*i; j <= n; j += i*2)
                {
                    arr[j] = 1;
                }
        }
    }

    return;
}
int main()
{
    sieve(1000000);
    int n, reversedNumber, remainder, temp;
    while(scanf("%d", &n) == 1)
    {
        if(arr[n])
            printf("%d is not prime.\n", n);
        else
        {
            temp = n;
            reversedNumber = 0;
            while(temp != 0)
            {
                remainder = temp % 10;
                reversedNumber = reversedNumber*10 + remainder;
                temp /= 10;
            }
            if(!arr[n] && !arr[reversedNumber] && n != reversedNumber)
                printf("%d is emirp.\n", n);
            else
                printf("%d is prime.\n", n);
        }
    }

    return 0;
}
