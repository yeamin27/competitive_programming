#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,d,i,n;
    while(cin>>s>>d)
    {
        n = 0;

        for(i = s; n < d && n != d; ++i)
            n = n + i;


        cout<<i-1<<endl;
    }


    return 0;
}
