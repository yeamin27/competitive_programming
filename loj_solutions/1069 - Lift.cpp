#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t, x, y;
	
	cin >> t;
	for(int tc = 1; tc <= t; ++tc)
	{
		cin >> x >> y ;
		cout << "Case " << tc << ": ";
		cout << (abs(x - y) + x) * 4 + 19 << endl;
	}
	
	return 0;
}
