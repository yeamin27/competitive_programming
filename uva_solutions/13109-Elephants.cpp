#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, m, cnt, arr[100005];
	
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &m);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
			
		sort(arr, arr+n);
		cnt = 0;
		for (int i = 0; i < n && arr[i] <= m; i++)
			++cnt, m -= arr[i];
		printf("%d\n", cnt);
	}
	
	return 0;
}
