#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long b, q, l, m, arr[100000];
    long long i, j, flag = 1, ans = 0;

    scanf("%I64d %I64d %I64d %I64d", &b, &q, &l, &m);
    for(i = 0; i < m; ++i)
        scanf("%I64d", &arr[i]);

    if(b > l)
    {
        flag = 0;
        printf("0\n");
    }

    else
    {
        while(abs(b) <= l)
        {
            for(i = 0; i < m; ++i)
                if(arr[i] == b)
                    break;

            if(b == 0)
            {
                if(i == m)
                {
                    flag = 0;
                    printf("inf\n");
                    break;
                }
                else
                    break;
            }

            else if(q == 1)
            {
                if(i == m)
                {
                    flag = 0;
                    printf("inf\n");
                    break;
                }
                else
                    break;
            }

            else if(q == -1)
            {
                b = -b;
                for(j = 0; j < m; ++j)
                    if(arr[j] == b)
                        break;

                if(i != m && j != m)
                {
                    flag = 0;
                    printf("0\n");
                    break;
                }
                else
                {
                    flag = 0;
                    printf("inf\n");
                    break;
                }
            }

            else if(q == 0)
            {
                for(j = 0; j < m; ++j)
                    if(arr[j] == 0)
                        break;

                if(j == m)
                {
                    flag = 0;
                    printf("inf\n");
                    break;
                }

                else if(i != m)
                {
                    flag = 0;
                    printf("0\n");
                    break;
                }
                else
                {
                    flag = 0;
                    printf("1\n");
                    break;
                }
            }

            if(i == m)
            {
                ++ans;
            }
            b *= q;
        }
    }

    if(flag)
        printf("%I64d\n", ans);


    return 0;
}

