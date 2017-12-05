#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, m, n, ans;
	cin >> t;
	for(int c = 1; c <= t; ++c)
	{
		scanf("%d %d", &m, &n);
        
        if(m == 1 || n == 1)
            ans = m*n;
        
        else if(m == 2 || n == 2)
        {
            int mx= max(m,n);
            int temp = mx%4;
            
            if(temp != 0)
                mx += ((temp&1)? 1 : 2);
           
            ans = mx;
        }
        
        else
            ans = ( (m*n) + 1) / 2;
        
        printf("Case %d: %d\n", c, ans);
    }
    
    return 0;
}
