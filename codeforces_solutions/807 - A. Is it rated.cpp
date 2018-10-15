#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[1010][5];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d %d", &arr[i][0], &arr[i][1]);

    int flag1 = 0, flag2 = 0;
    int mx = arr[0][1];
    for(int i = 0; i < n; ++i)
    {
        if(arr[i][0] != arr[i][1])
            flag1 = 1;
        if(arr[i][1] > arr[i-1][1])
            flag2 = 1;
    }
    if(flag1 == 1)
        printf("rated\n");
    else if(flag1 == 0 && flag2 == 1)
        printf("unrated\n");
    else
        printf("maybe\n");

    return 0;
}
