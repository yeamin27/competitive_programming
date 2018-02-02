#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, arr[1010];
	
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
		
	sort(arr, arr+n);
	
	for(int i = n-1; i >= 0; --i)
	{
		int t = (int) sqrt(arr[i]);	
		
		if(t*t != arr[i])
			return cout << arr[i] << endl, 0;
	}
		
	return 0;
}
