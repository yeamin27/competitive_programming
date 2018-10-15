#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, arr[30] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987};
	
	cin >> n;
	for(int i = 1, j = 0; i <= n; ++i)
	{
		if(i == arr[j])
		{
			cout << "O";
			++j;
		}
		
		else
			cout << "o";
	}
		
	cout << endl;
	
	return 0;
}
