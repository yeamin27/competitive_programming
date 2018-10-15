#include<bits/stdc++.h>
using namespace std;

string str;
int main()
{
    long long k, cnt = 0, ans = 0;

    cin >> k >> str;
    

    int sz = str.size();

    sort(str.begin(), str.end());
    for(int i = 0; i < sz; ++i)
    {
        cnt += str[i] - '0';
    }
    
    for(int i = 0; cnt < k && i < sz; ++i)
    {
        ++ans;
        cnt += 9 - (str[i] - '0');
    }

    cout << ans << endl;

    return 0;
}
