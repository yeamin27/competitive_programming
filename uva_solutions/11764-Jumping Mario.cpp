#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, c, n, arr[100], i, hj, lj;
    cin>>t;
    for(c = 1; c <= t; ++c)
    {
        hj = 0;
        lj = 0;
        cin>>n;
        for(i = 0; i < n; ++i)
        {
            cin>>arr[i];
            if(i == 0)
                continue;
            if(arr[i] > arr[i-1])
                ++hj;
            else if(arr[i] < arr[i-1])
                ++lj;
        }
        cout<<"Case "<<c<<": "<<hj<<" "<<lj<<endl;
    }

    return 0;
}
