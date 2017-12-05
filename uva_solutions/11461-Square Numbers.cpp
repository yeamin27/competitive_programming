#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int main()
{
    int a, b, lim, cnt, i;
    lim = sqrt(100000);
    arr[1] = 1;
    for(i = 2; i <= lim; ++i)
        arr[i*i] = 1;
    while((cin>>a>>b) && a != 0 && b != 0)
    {
        cnt = 0;
        for(i = a; i <= b; ++i)
        {
            if(arr[i] == 1)
                ++cnt;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
