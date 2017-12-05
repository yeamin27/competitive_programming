#include<string.h>
#include<stdio.h>
int main()
{
    int n, c = 1, i, len;
    char str[110];
    while(scanf("%d", &n) && n!= 0)
    {
        printf("Case %d:\n", c);
        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n{\n");
        getchar();
        while(n--)
        {
            gets(str);
            len = strlen(str);
            printf("printf(\"");
            for(i = 0; i < len; ++i)
            {
                if(str[i] == '\\' || str[i] == '"')
                    printf("\\%c", str[i]);
                else
                    printf("%c", str[i]);
            }
            printf("\\n\");\n");
        }
        printf("printf(\"\\n\");\n");
        printf("return 0;\n");
        printf("}\n");
        ++c;
    }
    return 0;
}
