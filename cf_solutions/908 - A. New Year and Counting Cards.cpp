#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int cnt = 0;
	cin >> str;
	for(int i = 0; i < str.size(); ++i)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			++cnt;
			
		else if(str[i] == '1' || str[i] == '3' || str[i] == '5' || str[i] == '7' || str[i] == '9')
			++cnt;
	}
	
	cout << cnt << endl; 

	return 0;
}
