#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string s[1010];
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 0; i < n; ++i)
            cin >> s[i];
            
        if(n == 1)
		{
			cout << 1 << endl;
			continue;
		}
		
        sort(s,s+n);
        
        int k = 0, l = 0, ans = 0;
        
        while(s[0][k] == s[1][k])
            ++k;

        ans += k+1;
        k = 0;
        while(s[n-1][k] == s[n-2][k])
            k++;

        ans += k+1;
        for(int i = 1; i < n-1; ++i)
        {
            k = 0;
            while(s[i][k] == s[i-1][k])
                ++k;
                
            l = 0;
            while(s[i][l] == s[i+1][l])
                ++l;
                
            k = max(k,l);
            ans += k+1;

        }
        cout << ans << endl;
    }

return 0;
}
