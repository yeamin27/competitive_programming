#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int sum, t1, t2, f, a, c1, c2, c3;
	
	cin >> t;
	for(int tc = 1; tc <= t; ++tc)
	{
		sum = 0;
		cin >> t1 >> t2 >> f >> a >> c1 >> c2 >> c3;
		
		sum = t1 + t2 + f + a;
		if(c1 <= c2 && c1 <= c3)
			sum += (c2+c3)/2;
		else if(c2 <= c1 && c2 <= c3)
			sum += (c1+c3)/2;
		else if(c3 <= c2 && c3 <= c1)
			sum += (c2+c1)/2;		
		
		cout << "Case " << tc << ": ";
		if(sum >= 90)
			cout << "A";
		else if(sum >= 80)
			cout << "B";
		else if(sum >= 70)
			cout << "C";
		else if(sum >= 60)
			cout << "D";
		else
			cout << "F";
		cout << "\n";	
	}


    return 0;
}
