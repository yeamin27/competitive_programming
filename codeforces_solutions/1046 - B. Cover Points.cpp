#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long x, y, z, ans = 0;
	cin >> x;
	while(x--)
	{
		cin >> y >> z;
		ans = max(y+z, ans);
	}
	cout << ans << endl;
	return 0;
}
