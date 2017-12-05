#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        n = (n * (n + 1) ) / 2;
        n *= n;
        cout<<n<<endl;
    }

    return 0;
}
