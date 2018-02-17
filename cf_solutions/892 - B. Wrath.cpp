#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, x, ans[1000006];
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		cin >> x;
		ans[i] = i - x;
	}
	
	int shokti = ans[n], jibito = n;
	for(int i = n-1; i > 0; --i)
	{
		if(i >= shokti)
			--jibito;
		
		shokti = min(shokti, ans[i]);
	}
	cout << jibito << endl;
	
	return 0;
	
}
