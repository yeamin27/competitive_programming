#include<stdio.h>
#include<string.h>
int main()
{
    int a,d,len;
    char str[100000];
    while(scanf("%s",str)!=EOF){
        len=strlen(str);
        for(a=0;a<len;++a){
            d=str[a]-7;
            printf("%c",d);
        }
        printf("\n");
    }
    return 0;
}
