#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t, n;
    vector<int> v;
    scanf("%d",&t);
    
    for(int c = 1; c <= t; ++c)
    {
        scanf("%d",&n);
        
        v.clear();
        while(n >= 2)
        {
            v.push_back(n % 2);
            n /= 2;
        }
        v.push_back(n);
        v.push_back(0);
        
        reverse(v.begin(), v.end());
        
        next_permutation(v.begin(), v.end());
        
        long long ans = 0;
        int pos = 0;
        for(int i = v.size() - 1; i >= 0; i--)
        {
            if(v[i])
                ans |= (1LL << pos);
            pos++;
        }
        printf("Case %d: %lld\n", c, ans);
    }
    return 0;
}
