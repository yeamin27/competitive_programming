#include<bits/stdc++.h>
using namespace std;

int arr[100010];
int main()
{
	int x, n;
	
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> x;
		++arr[x];
	}
	
	for(int i = 100005; i > 0; --i)
	{
		if(arr[i] & 1)
			return cout << "Conan" << endl, 0;
	}
	
	cout << "Agasa" << endl;
		
	return 0;
}
