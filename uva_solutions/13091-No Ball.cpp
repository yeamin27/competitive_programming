#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string str[10];
	
	cin >> t;
	for(int tc = 1; tc <= t; ++tc)
	{
		for(int i = 0; i < 5; ++i)
			cin >> str[i];
			
		bool f = 0;
		int m = 5;
		for(int i = 0; i < 5; ++i)
		{
			for(int j = 0; j < m; ++j)
			{
				if(str[i][j] == '|')
				{
					m = j;
					break;
				}
				if(str[i][j] == '<')
					f = 1;
			}
		}
		for(int i = 0; i < 5; ++i)
		{
			for(int j = m+1; j < 5; ++j)
			{
				if(str[i][j] == '>')
					f = 1;
			}
		}
		cout << "Case " << tc << ": ";
		if(f)
			cout << "No Ball" << endl;
		else
			cout << "Thik Ball" << endl;
	}

    return 0;
}
