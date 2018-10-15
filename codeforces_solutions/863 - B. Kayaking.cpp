#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a[110], b[110];
	cin >> n;
	
	for(int i = 0; i < 2*n; i++)
		cin >> a[i];
	sort(a, a+2*n);
	
	int mx = 1000000000;
	for(int i = 0; i < 2*n; i++)
	{
		for(int j = i+1; j < 2*n; j++)
		{
			int cnt = 0;
			for(int k = 0;k < 2*n; k++)
			{
				if(k != i && k != j) 
					b[cnt++] = a[k];
			}

			int ans = 0;
			for(int i = 0; i < cnt; i += 2)
			{
				ans += b[i+1] - b[i];
			}
			mx = min(ans, mx);
		}
	}

	cout << mx << endl;
	return 0;
}
