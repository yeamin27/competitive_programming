#include<stdio.h>
#include<string.h>
int main()
{
    int len, i, j, cnt;
    char str[1000000], c;
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; ++i)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            cnt = i;
            if(str[cnt] == 'A' || str[cnt] == 'E' || str[cnt] == 'I' || str[cnt] == 'O' || str[cnt] == 'U')
            {
                while((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                    printf("%c", str[i++]);

                printf("ay");
                --i;
            }
            else if(str[cnt] == 'a' || str[cnt] == 'e' || str[cnt] == 'i' || str[cnt] == 'o' || str[cnt] == 'u')
            {
                while((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                    printf("%c", str[i++]);

                printf("ay");
                --i;
            }

            else
            {
                c = str[i];
                while((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                {
                    str[i] = str[i+1];
                    ++i;
                }
                --i;
                str[i] = c;
                for(j = cnt; j <= i; ++j)
                    printf("%c", str[j]);
                printf("ay");
            }
        }
        else
            printf("%c", str[i]);
    }
    printf("\n");

    return 0;

}
