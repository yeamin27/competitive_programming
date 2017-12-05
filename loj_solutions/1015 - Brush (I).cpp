#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for(int c = 1; c <= t; ++c)
	{
		cin >> n;
		int x, sum = 0;
		while(n--)
		{
			cin >> x;
			if(x > 0)
				sum += x;
				
		}
		
		cout << "Case " << c << ": " << sum << endl;
	}
	
	return 0;
}
