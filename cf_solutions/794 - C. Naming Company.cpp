#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string oleg, igor;
    char ans[1000050];

    getline(cin, oleg);
    getline(cin, igor);

    n = oleg.size();
    sort(oleg.begin(), oleg.end());
    sort(igor.rbegin(), igor.rend());

    int st = 0, en = n-1, o_st = 0, i_st = 0, o_en = (n+1)/2 - 1, i_en = n/2 - 1;
    for(int i = 0; i < n; ++i)
    {
        if(i&1)
        {
            if(oleg[o_st] < igor[i_st])
                ans[st++] = igor[i_st++];
            else
                ans[en--] = igor[i_en--];
        }
        else
        {
            if(oleg[o_st] < igor[i_st])
                ans[st++] = oleg[o_st++];
            else
                ans[en--] = oleg[o_en--];
        }
    }
    for(int i = 0; i < n; ++i)
        printf("%c", ans[i]);

    cout << endl;

    return 0;
}
