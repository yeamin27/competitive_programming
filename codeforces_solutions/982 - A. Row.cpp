#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	char str[1100];
	
	cin >> n >> str;
	
	if(n == 1)
	{
		if(str[0] == '1')
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	
	else if(n == 2)
	{
		if(str[0] == '1' && str[1] == '0')
			cout << "Yes\n";
		else if(str[1] == '1' && str[0] == '0')
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	
	else
	{
		for(int i = 1; i < n; ++i)
			if(str[i] == '1' && str[i] == str[i-1])
				return cout << "No\n", 0;
				
		string d, t1 = "000", t2 = "100", t3 = "001";
		for(int i = 0; i+2 < n; ++i)
		{
			d = "";
			d += str[i];
			d += str[i+1];
			d += str[i+2];
			if(t1 == d)
				return cout << "No\n", 0;
			if(i==n-3 && d==t2)
				return cout << "No\n", 0;
			if(i==0 && d==t3)
				return cout << "No\n", 0;
		}
		cout << "Yes\n";
	}
	
	return 0;
}
