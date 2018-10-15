#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, pos = 0, neg = 0;
	long int x, y;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		if(x>0)
			++pos;
		else
			++neg;
	}
		
	if(pos<2 || neg<2)
		cout << "yes" << endl;
	else 
		cout << "no" << endl;
		
	return 0;
}
		
