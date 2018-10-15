#include<bits/stdc++.h>
using namespace std;

int main()
{
	double pi = 2 * acos(0.0), r, sa, ca;
	int t;
	cin >> t;
	for(int c = 1; c <= t; ++c)
	{
		cin >> r;
		ca = pi * r * r;
		sa = r*r*4;
		printf("Case %d: %.2lf\n", c, sa-ca);
	}
	
	return 0;
}
