#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string str;
	
	cin >> t;
	while(t--)
	{
		cin >> str;
		sort(str.begin(), str.end());
		map<char, bool> mp;
		
		for(size_t i = 0; i < str.size(); ++i)
		{
			if(mp[ str[i] ])
				str[i] = str[0];
			else
				mp[ str[i] ] = 1;
		}
		sort(str.begin(), str.end());
		cout << str << endl;
	}


    return 0;
}
