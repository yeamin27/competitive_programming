#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    int cnt, len;

    while(getline (cin,line))
    {
        len = line.size();
        cnt = 0;
        for(int i = 0; i < len; ++i)
        {
            if((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z'))
            {
                ++cnt;
                for(; (line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z') && i < len; ++i);
            }

        }
        cout<<cnt<<endl;
    }

    return 0;
}
