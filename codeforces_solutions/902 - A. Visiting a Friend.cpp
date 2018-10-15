#include <bits/stdc++.h>
using namespace std;

struct data{
	int a, b;
};

int main()
{
	int n, m;
	data arr[110];
	cin >> n >> m;
	
	for(int i = 0; i < n; ++i)
		cin >> arr[i].a >> arr[i].b;
		
	if(arr[0].a > 0)
	{
		cout << "NO" << endl;
		return 0;
	}
	
	int e = arr[0].b;
	for(int i = 1; i < n; ++i)
	{
		if(e < arr[i].a && e < m)
		{
			cout << "NO" << endl;
			return 0;
		}
		
		e = max(e, arr[i].b);
	}
	if(e >= m)
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;

	return 0;
}

