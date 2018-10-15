#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, x, y , z, ans = 0;
	cin >> a >> b >> x >> y >> z;
	
	long long i, j;
	i = (2*x) + y;
	j = (3*z) + y;
	
	if( i > a )
		ans = i - a;
	if( j > b )
		ans += j - b;
		
	
	cout << ans << endl;
		
	return 0;
}
