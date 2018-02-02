#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, x;
	cin >> n >> k >> x;
	
	int i, t, sum = 0;
	for(i = 0; i < n-k; ++i)
	{
		cin >> t;
		sum += t;
	}
	
	for(; i < n; ++i)
	{
		cin >> t;
		sum += min(t,x);
	}
	
	cout << sum << endl;
	
	return 0;
}
