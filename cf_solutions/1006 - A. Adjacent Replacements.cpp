#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long long x;
	
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> x;
		if(x&1)
			cout << x << " ";
		else
			cout << x-1 << " ";
	}
	cout << endl;

	return 0;
}
