#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	ll n, h, w, lx = 0, ly = 0, rx = 0, ry = 0;
	char c;
	
	cin >> n;
	while(n--)
	{
		cin.ignore();
		cin >> c >> h >> w;
		if(h > w)
			swap(h, w);
		
		if(c == '?')
		{
			if(h >= lx && w >= ly)
				cout << "YES\n";
			
			else if(h >= rx && w >= ry)
				cout << "YES\n";
				
			else
				cout << "NO\n";
		}
		
		else
		{
			lx = max(lx, h);
			ly = max(ly, w);
			rx = max(rx, h);
			ry = max(ry, w);
		}
	}
	
	return 0;
}
