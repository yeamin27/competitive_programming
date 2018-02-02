#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	unsigned long long sum = 0, arr[1000005], x;
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> x;
		sum += x;
	}
	
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
		
	sort(arr, arr+n);
	
	if(arr[n-1] + arr[n-2] >= sum)
		cout << "YES" << endl;
		
	else
		cout << "NO" << endl;
		
	return 0;
}
