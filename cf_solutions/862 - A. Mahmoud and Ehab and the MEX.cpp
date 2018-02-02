#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x, cnt = 0, arr[110];
	cin >> n >> x;
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
		
	for(int i = 0; i < n; ++i)
		if(arr[i] < x)
			++cnt;
	
	cnt = x - cnt;
	for(int i = 0; i < n; ++i)
		if(arr[i] == x)
			++cnt;
			
	cout << cnt << endl;
	
	return 0;
}
