#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h1, a1, c1, h2, a2;
	vector<string> str;
	cin >> h1 >> a1 >> c1;
	cin >> h2 >> a2;
	
	while(h2 > 0)
	{
		if(h2 - a1 <= 0 || h1 - a2 > 0)
		{
			h2 -= a1;
			str.push_back("STRIKE");
		}
		else if(h2 - a1 > 0 && h1 - a2 <= 0)
		{
			h1 += c1;
			str.push_back("HEAL");
		}
		
		h1 -= a2;
	}
	
	cout << str.size() << endl;
	for(int i = 0; i < str.size(); ++i)
		cout << str[i] << endl;

	return 0;
}
