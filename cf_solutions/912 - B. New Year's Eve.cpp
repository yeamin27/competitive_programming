#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, k, sum = 1;
	cin >> n >> k;
	
	if(k == 1)
        return cout << n << endl, 0;

	while(sum <= n)
		sum <<= 1;

	cout << sum-1 << endl;

	
	
		
	return 0;
}
