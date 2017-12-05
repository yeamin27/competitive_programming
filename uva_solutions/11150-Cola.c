#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n) == 1)
    {
        if(n < 2)
        	printf("%d\n", n);
        else
        {
        	n += n/2;
        	printf("%d\n",n);
        }
    }

    return 0;
}
