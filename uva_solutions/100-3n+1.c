#include<stdio.h>
int main()
{
    int cl=1,t;
    long long i,j,s=0;
    while(scanf("%lld %lld",&i,&j)!=EOF){
    	s=0;
    	printf("%lld %lld ",i,j);
    	if(i>j){
    		i=i+j;
    		j=i-j;
    		i=i-j;
    	}
    	for(;i<=j;++i){
        	cl=1;
    	    t=i;
	        while(t>1){
        	    if(t%2==1)
            	    t=3*t+1;
            	else
                	t=t/2;
            	++cl;
        	}
    		if(s<cl)
        	s=cl;
    	}
    	printf("%lld\n",s);
    }
    return 0;
}

