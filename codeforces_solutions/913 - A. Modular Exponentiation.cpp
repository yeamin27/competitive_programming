#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, m;
	
	cin >> n >> m;
	if(n > 31)
		return cout << m << endl, 0;
		
	n = 1ll << n;
	cout << m % n << endl;
		
	return 0;
}
