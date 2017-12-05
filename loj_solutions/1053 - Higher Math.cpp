#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	unsigned long long x, y, z, t1, t2;
	
	cin >> t;
	for(int tc = 1; tc <= t; ++tc)
	{
		cin >> x >> y >> z;
		cout << "Case " << tc << ": ";
		if(y > x)
			swap(x, y);
		if(z > x)
			swap(x, z);
		
		t1 = y * y;
		t2 = z * z;
		
		if((x*x) == t1+t2)
			cout << "yes" << endl;
			
		else
			cout << "no" << endl;
	}
	
	return 0;
}
