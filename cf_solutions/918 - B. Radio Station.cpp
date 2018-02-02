#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	string name, ip, command;
	map <string, string> mp;
	
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
	{
		cin >> name >> ip;
		ip += ";";
		mp[ip] = name;
	}
	
	for(int i = 0; i < m; ++i)
	{
		cin >> command >> ip;
		cout << command << " " << ip << " " << "#" << mp[ip] << endl;
	}
	
	return 0;
}

