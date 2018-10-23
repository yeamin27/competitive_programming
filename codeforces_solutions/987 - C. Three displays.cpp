#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
    int n;
    bool x, y;
    ll s[3005], cost[3005], mn1, mn2;
    
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> s[i];
    for(int i = 0; i < n; ++i)
        cin >> cost[i];
        
    ll mn = INT_MAX;
    for(int i = 1; i < n; ++i)
    {
		x = y = 0;

        mn1 = mn2 = INT_MAX;
        for(int j = i+1; j < n; ++j)
        {
            if(s[j] > s[i])
            {
                mn1 = min(mn1, cost[j]);
                x = 1;
            }
        }
        
        for(int j = i-1; j >= 0; j--)
        {
            if(s[j] < s[i])
            {
                mn2 = min(mn2, cost[j]);
                y = 1;
            }
        }
        
        if(x && y)
            mn = min(mn, cost[i]+mn1+mn2);
    }

    if(mn == INT_MAX)
		cout << -1 << endl;
    else
        cout << mn << endl;
        
    return 0;
}
