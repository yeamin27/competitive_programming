#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    const char T[][6]={" ",".,?\"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    while(t--){
        scanf("%d",&n);
        int a[n],b[n];
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        for(i=0;i<n;++i)
            scanf("%d",&b[i]);
        for(i=0;i<n;++i)
            printf("%c",T[a[i]][b[i]-1]);
        printf("\n");
    }
    return 0;
}
