#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, s, d, ans = 0;
	
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> s >> d;
		if(s > ans) 
			ans = s;
		
		else
		{
			while(s <= ans)
				s += d;
				
			ans = s;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
