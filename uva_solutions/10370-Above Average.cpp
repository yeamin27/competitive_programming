#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, cnt, n, arr[1020], sum, average;
    double ans;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>n;
            sum = 0;
            cnt = 0;
            for(i = 0; i < n; ++i)
            {
                cin>>arr[i];
                sum += arr[i];
            }
            average = sum / n;
            for(i = 0; i < n; ++i)
                if(arr[i] > average)
                    ++cnt;
            ans = ((double)cnt / (double)n) * 100.0;
            cout<<fixed<<setprecision(3);
            cout<<ans<<"%"<<endl;
        }
    }

    return 0;
}
