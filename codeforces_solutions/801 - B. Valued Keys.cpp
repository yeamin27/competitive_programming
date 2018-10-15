#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[150], str2[150], str3[150], str4[150];
    gets(str1);
    gets(str2);
    int len = strlen(str1);
    int flag = 0;
    for(int i = 0; i < len; ++i)
    {
        str3[i] = str1[i] < str2[i] ? str1[i] : str2[i];

        char c = str1[i] < str3[i] ? str1[i] : str3[i];
        if(c != str2[i])
        {
            flag = -1;
            break;
        }
    }
    if(flag == 0)
    {
        for(int i = 0; i < len; ++i)
            cout << str3[i];
    }
    else
        cout << -1 << endl;

    return 0;
}
