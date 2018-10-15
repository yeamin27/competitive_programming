
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	long long cnt = 0;
	string str;
	
	cin >> str;
	n = str.size();
	
	for(int i = 0; i < n; ++i)
	{
		if(str[i] == 'Q')
		{
			for(int j = i+1; j < n; ++j)
			{
				if(str[j] == 'A')
				{
					for(int k = j+1; k < n; ++k)
					{
						if(str[k] == 'Q')
							++cnt;
					}
				}
			}
		}
	}	
	
	cout << cnt <<endl;
	
	return 0;
}
