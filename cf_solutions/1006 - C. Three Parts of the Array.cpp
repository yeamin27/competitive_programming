#include<bits/stdc++.h>
using namespace std;

long long arr[200005], sum, mx;
map<long long, int> mp;

int main()
{
    int n;
    
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
		cin >> arr[i];
		sum += arr[i];
		mp[sum] = i;
	}
	
	sum = 0;
	for(int i = n; i > 0; --i)
	{
		sum += arr[i];
		
		if(mp[sum] && i > mp[sum])
			mx = sum;
	}
	cout << mx << endl;

    return 0;
}

