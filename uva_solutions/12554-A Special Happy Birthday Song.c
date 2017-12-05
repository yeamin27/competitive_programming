#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n,p=0,s=0;
    char name[100][100];
    const char str[16][10]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%s",name[i]);

    k=n/16;
    for(j=0;j<=k;++j)
    {
        s=0;
        for(l=0;l<16;++l){
            if(p==n)
                p=0;
            printf("%s: %s\n",name[p],str[s]);
            ++p;
            ++s;
        }
    }
    return 0;
}
