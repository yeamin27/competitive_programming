#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[150];
    gets(str);
    int len = strlen(str);
    --len;

    int flag = 0, cnt = 0;

    for(int i = 0; i < len;)
    {
        if(str[i] == 'V' && str[i+1] == 'K')
        {
            ++cnt;
            i += 2;
            continue;
        }
        else if(str[i] == 'K' && str[i+1] == 'V')
        {
            ++i;
            continue;
        }

        else if(str[i] == 'V' && str[i+1] == 'V')
        {
            if(str[i+2] == 'K')
            {
                ++cnt;
                i += 3;
                continue;
            }
            if(flag == 0)
            {
                ++cnt;
                ++flag;
                i += 2;
                continue;
            }
            ++i;
        }
        else if(str[i] == 'K' && str[i+1] == 'K')
        {
            if(flag == 0)
            {
                ++cnt;
                ++flag;
                i += 2;
                continue;
            }
            ++i;
        }
    }
    cout << cnt << endl;
    return 0;
}
