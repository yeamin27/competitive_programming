#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, len, i, flag;
    char str[200];
    stack<char>stk;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(str);
        len = strlen(str);
        if(len == 0)
            printf("Yes\n");
        else
        {
            stk = stack <char> ();
            flag = 0;
            for(i = 0; i < len; ++i)
            {
                if(str[i] == '(' || str[i] == '[')
                    stk.push(str[i]);

                else if(str[i] == ')' && stk.size() && stk.top() == '(')
                    stk.pop();

                else if(str[i] == ']' && stk.size() && stk.top() == '[')
                    stk.pop();

                else flag = 1;
            }

            if(stk.size() || flag == 1)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }

    return 0;
}
