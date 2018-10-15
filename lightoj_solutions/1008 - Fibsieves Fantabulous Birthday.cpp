#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, l = 0;
    long long int i, s, r, c;
    cin >> t;
 
    while(t--)
    {
        scanf("%lld", &s);
        i = ceil(sqrt(s));
 
        if(i&1)
        {
            if((i*i-s)<i)
            {
                r=i;
                c=i*i-s+1;
            }
            else
            {
                r=s-((i-1)*(i-1));
                c=i;
            }
        }
        else
        {
            if((i*i-s)<i)
            {
				c=i;
                r=i*i-s+1;
            }
            else
            {
                c=s-((i-1)*(i-1));
                r=i;
            }
        }
        printf("Case %d: %lld %lld\n",++l,c,r);
    }
 
    return 0;
}
