#include<stdio.h>
int main(){
    int a,i,n,p;
    int b[100000];
    while((scanf("%d",&n))!=0){
        p=0;
        i=0;
        while(n!=0){
            a=n%2;
            b[i]=a;
            if(a==1)
                ++p;
            n/=2;
            ++i;
        }
        printf("The parity of ");
        for(i-=1;i>=0;--i){
            printf("%d",b[i]);
        }
        printf(" is %d (mod 2).\n",p);

    }
    return 0;
}
