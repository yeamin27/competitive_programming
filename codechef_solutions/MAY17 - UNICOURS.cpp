#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, mx, temp, ans, arr[100010];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        ans = n;
        mx = -1;
        temp = 0;
        for(int i = 0; i < n; ++i)
        {
            if(arr[i] > mx)
            {
                ans += temp;
                mx = arr[i];
                temp = mx;
                ans -= mx;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
