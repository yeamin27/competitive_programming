#include<bits/stdc++.h>
using namespace std;
	
double tarea(double a, double b, double c)
{
	double s = (a + b + c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
	int t;
	double a, b, c, d, h, area, diff;
	
	cin >> t;
	for(int i = 1; i <= t; ++i)
	{
		cin >> a >> b >> c >> d;
		
		diff = fabs(a - c);
		area = tarea(b, d, diff);
		h = 2.0 * area / diff;
		printf("Case %d: %.8lf\n", i, area+ (min(a,c) * h) );
	}
	return 0;
}
