#include<stdio.h>
int main()
{
    int m,n;
    long x;
    while(scanf("%d %d",&m,&n)!=EOF){
        x=m*n;
        printf("%ld\n",x-1);
    }
    return 0;
}
