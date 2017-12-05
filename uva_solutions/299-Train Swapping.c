#include<stdio.h>
int main()
{
    int t, n, arr[50], temp, i, j, f;
    scanf("%d", &t);
    while(t--)
    {
        f = 0;
        scanf("%d", &n);
        for(i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        for(i = 0; i < n - 1; ++i)
        {
            for(j = 0; j < n-i-1; ++j)
            {
                if(arr[j] > arr[j+1])
                {
                    temp =  arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    ++f;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", f);
    }
    return 0;
}
