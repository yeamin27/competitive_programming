#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, c, i, sum, a, b;
    cin>>t;
    for(c = 1; c <= t; ++c)
    {
        sum = 0;
        cin>>a>>b;
        if(a %2 == 0)
            ++a;
        for(i = a; i <=b; i += 2)
        {
            sum += i;
        }

        cout<<"Case "<<c<<": "<<sum<<endl;
    }

    return 0;
}
