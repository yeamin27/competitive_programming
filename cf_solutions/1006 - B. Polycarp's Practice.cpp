#include<bits/stdc++.h>
using namespace std;

int n, k, arr[2010], cpy[2010];
map<int, int> mp;

int main()
{	
	cin >> n >> k;
	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		cpy[i] = arr[i];
	}
	sort(cpy, cpy+n, greater<int>());
	
	int ans = 0, cnt = 1, ck = 0, cs = 0;
	
	for(int i = 0; i < k; ++i)
	{
		++mp[ cpy[i] ];
		ans += cpy[i];
	}
	cout << ans << endl;
		
	for(int i = 0; i < n; ++i)
	{
		if(ck == k-1)
		{
			cout << n-cs << endl;
			break;
		}
		if(mp[ arr[i] ])
		{
			--mp[ arr[i] ];
			cout << cnt << " ";
			cs += cnt;
			cnt = 1;
			++ck;
		}
		else
			++cnt;
	}
			
		
		
		
	return 0;
}
