#include<bits/stdc++.h>
using namespace std;
	
int main()
{
	long long x, y;
	
	while(cin >> x >> y)
	{
		if(x*log(y) == y*log(x))
			cout << "=" << endl;
			
		else if(x*log(y) < y*log(x))
			cout << ">" << endl;
		
		else
			cout << "<" << endl;		
	}
		
	return 0;
}
	
