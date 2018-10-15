#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n, arr[100005];

    scanf("%d %d %d %d", &a, &b, &c, &n);

    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    int cnt = 0;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] > b && arr[i] < c)
            ++cnt;
    }

    printf("%d\n", cnt);

    return 0;
}

