#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, n, len;
    char str[1000000], new_str[100], a, b;
    scanf("%d", &t);
    getchar();

    while(t--)
    {
        scanf("%s", str);
        len = strlen(str);

        for(i = 'A'; i <= 'Z'; ++i)
        {
            new_str[i] = i;
        }
        scanf("%d", &n);
        getchar();

        while(n--)
        {
            scanf("%c %c", &a, &b);
            getchar();

            for(i = 'A'; i <= 'Z'; ++i)
            {
                if(new_str[i] == b)
                {
                    new_str[i] = a;
                }
            }
        }

        for(i = 0; i < len; ++i)
			printf("%c", new_str[str[i]]);
        printf("\n");

    }

    return 0;
}

