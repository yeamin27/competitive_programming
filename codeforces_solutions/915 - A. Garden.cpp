#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, arr[110];
	
	cin >> n >> k;
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
		
	sort(arr, arr+n);
	
	for(int i = n-1; i >= 0; --i)
	{
		if(k%arr[i] == 0)
			return cout << k/arr[i] << endl, 0;
	}
		
	return 0;
}
