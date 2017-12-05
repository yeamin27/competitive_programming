#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d, f, t, i;
    float ans, c;
    cin>>t;
    for(i = 1; i <= t; ++i)
    {
        cin>>d>>f;
        c = (float) (5 * (f - 32)) / 9;
        ans = c + (float) d + 17.777779;
        printf("Case %d: %.2f\n", i, ans);
    }

    return 0;
}
