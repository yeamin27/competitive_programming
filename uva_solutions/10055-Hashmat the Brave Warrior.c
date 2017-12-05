#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int hs, os;
    while(scanf("%ld %ld", &hs, &os) != EOF)
    {
        printf("%ld\n", labs(hs-os));
    }


    return 0;
}
