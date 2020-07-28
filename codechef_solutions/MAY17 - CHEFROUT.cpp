#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, flag;
    string str;
    scanf("%d", &t);
    getchar();

    while(t--)
    {
        flag = 0;
        getline(cin, str);
        int sz = str.size();
        --sz;
        for(int i = 0; i < sz; ++i)
        {
            if(str[i] == 'C')
            {
                if(str[i+1] == 'C' || str[i+1] == 'E' || str[i+1] == 'S')
                    continue;
            }
            if(str[i] == 'E')
            {
                if(str[i+1] == 'E' || str[i+1] == 'S')
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
            if(str[i] == 'S')
            {
                if(str[i+1] == 'S')
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}
