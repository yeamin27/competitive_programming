#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x, f = 0;
	cin >> n;
	while(n--)
	{
		cin >> x;
		if(x)
			f = 1;
	}
	if(f)
		cout << "HARD\n";
	else
		cout << "EASY\n";
	return 0;
}
