#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t, n, cnt;
	long int  arr[500005], w, x;
	cin >> t;
	
	for(int tc = 1; tc <= t; ++tc)
	{
		cnt = 1;
		cin >> n >> w;
		for(int i = 0; i < n; ++i)
			cin >> x >> arr[i];
			
		sort(arr, arr+n);
		
		long int d = arr[0];
		for(int i = 0; i < n; ++i)
		{
			if(arr[i] > d+w)
			{
				++cnt;
				d = arr[i];
			}
		}
		
		cout << "Case "<< tc << ": " << cnt << endl;
	}
	
	return 0;
}

