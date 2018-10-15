#include<bits/stdc++.h>
using namespace std;

float area(int x1, int y1, int x2, int y2, int x3, int y3) {
	return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

bool isInside(int x1, int y1, int x2, int y2, int x3,
			  int y3, int x4, int y4, int x, int y)
{
	float A = area(x1, y1, x2, y2, x3, y3) + area(x1, y1, x4, y4, x3, y3);
	
	float A1 = area(x, y, x1, y1, x2, y2);
	float A2 = area(x, y, x2, y2, x3, y3);
	float A3 = area(x, y, x3, y3, x4, y4);
	float A4 = area(x, y, x1, y1, x4, y4);
	
	return (A == A1 + A2 + A3 + A4);
}

int main()
{
	int n, d, m, x, y;
	cin >> n >> d >> m;
	
	while(m--)
	{
		cin >> x >> y;
				
		if(isInside(0, d, d, 0, n, n-d, n-d, n, x, y))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
	
	
	return 0;
}
