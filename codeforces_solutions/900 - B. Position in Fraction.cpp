#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	a %= b;
	for(int i = 1; i <= b; i++)
	{
		if(a == 0 && c != 0)
			break;
			
		a *= 10;
		if(a/b == c)
			return cout << i << endl, 0;
		
		a %= b;
	}
	cout << -1 << endl;

	return 0;
}
