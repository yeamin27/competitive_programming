#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long x, y = 1, z = 1;
	cin >> x;
	x -= 2;
	if(x%3 == 0)
	{
		--x;
		++y;
	}
	cout << x << " " << y << " " << z << endl;
	return 0;
}
