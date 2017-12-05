#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, x;
	cin >> t;
	while(t--)
	{
		cin >> n;
		if(n <= 10)
			cout << 0 << " " << n << endl;
			
		else
		{
			x = n - 10;
			cout << x << " " << n-x << endl;
		}
	}
	
	return 0;
}
