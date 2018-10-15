#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, arr[110], cnt = 0, ans = -1;
	cin >> n >> k;
	
	int i;
	for(i = 0 ; i < n; ++i)
		cin >> arr[i];
		
	i = 0;
	while(cnt < k && i < n)
	{
		if(arr[i] > 8)
		{
			arr[i+1] += arr[i]-8;
			cnt += 8;
		}
		else
			cnt += arr[i];
		
		++i;
	}
	if(cnt >= k)
		ans = i;
		
	cout << ans << endl;
	
	return 0;
}
