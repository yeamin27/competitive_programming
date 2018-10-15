#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;
	
	
	long long x = 1;
	for(long long i = a+1; i <= b; ++i)
	{
		x *= i;
		x %= 10;
		if(x == 0)
		{
			cout << 0 << endl;
			return 0;
		}
	}
	cout << x % 10 << endl;
		
	return 0;
}
