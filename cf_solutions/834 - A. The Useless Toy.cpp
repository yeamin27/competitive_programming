#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, in, track = 0;
    char c1, c2;
    char str1[5] = {'v', '<', '^', '>'};
    char str2[5] = {'v', '>', '^', '<'};

    scanf("%c %c %d", &c1, &c2, &n);

    n = n%4;

    if(n == 2 || c1 == c2)
    {
        printf("undefined\n");
        track = 1;
    }

    else if(track == 0)
    {
        for(int i = 0; i < 4; ++i)
        {
            if(str1[i] == c1)
            {
                in = i;
                in = (in + n) % 4;

                if(str1[in] == c2)
                {
                    printf("cw\n");
                    track = 1;
                    break;
                }
            }
        }
    }

    if(track == 0)
    {
        for(int i = 0; i < 4; ++i)
        {
            if(str2[i] == c1)
            {
                in = i;
                in = (in + n) % 4;

                if(str2[in] == c2)
                {
                    printf("ccw\n");
                    break;
                }
            }
        }
    }

    return 0;
}
