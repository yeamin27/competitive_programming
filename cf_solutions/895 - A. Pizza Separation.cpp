#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, arr[800],mn = 10000, s1 = 0, s2 = 0;
	
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> arr[i];

	for(int k = 0; k < n; ++k)
	{
		s1 = 0;
		s2 = 0;
		for(int i = k; i < n; ++i)
		{
			s1 += arr[i];
			s2 = 0;
			for(int j = 0; j < k ; ++j)
			{
				s2 += arr[j];
			}
			for(int j = i+1; j < n; ++j)
			{
				s2 += arr[j];
			}
			
			mn = min(mn, abs(s1-s2));
		}
	}
	
	cout << mn << endl;
	
	return 0;
}
