#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, arr[15];
    cin >> t;
    for(int i = 1; i <= t; ++i)
    {
        cin >> n;
        for(int j = 0; j < n; ++j)
            cin >> arr[j];

        sort(arr, arr+n);
        cout << "Case " << i << ": " << arr[n/2] << endl;
    }

    return 0;
}
