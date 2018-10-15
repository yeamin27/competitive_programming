#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, pos, l, r, ans = 0;
	
	cin >> n >> pos >> l >> r;
	
	if(l == 1 && r == n)
		return cout << 0 << endl, 0;
		
	if(pos >= l && pos <= r)
	{
		if(l == 1)
		{
			ans = 1+ r-pos;
			return cout << ans << endl, 0;
		}
		
		if(r == n)
		{
			ans = 1+ pos-l;
			return cout << ans << endl, 0;
		}
		
		ans = 2 + (r-l) + min(pos-l, r-pos);
		return cout << ans << endl, 0;
	}
	
	if(pos < l)
	{
		if(r == n)
		{
			ans = 1+ l-pos;
			return cout << ans << endl, 0;
		}
		
		ans = 2 + (r-l) + l-pos;
		return cout << ans << endl, 0;
	}
	
	if(pos > r)
	{
		if(l == 1)
		{
			ans = 1+ pos-r;
			return cout << ans << endl, 0;
		}
		
		ans = 2 + (r-l) + pos-r;
		return cout << ans << endl, 0;
	}
		
	return 0;
}
