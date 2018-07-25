#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	map<string, string> mp;
	map<string, bool> flag;
	
	string arr[10] = {"purple", "green" , "blue", "orange", "red", "yellow"};
	
	mp["purple"] = "Power";
	mp["green"] = "Time";
	mp["blue"] = "Space";
	mp["orange"] = "Soul";
	mp["red"] = "Reality";
	mp["yellow"] = "Mind";
	
	cin >> n;
	
	string str;
	for(int i = 0; i < n; ++i)
	{
		cin >> str;
		flag[str] = 1;
	}
	
	if(n==6)
		return cout << 0 << endl, 0;
	
	cout << 6-n << endl;
	
	for(int i = 0; i < 6; ++i)
	{
		if(flag[ arr[i] ] != 1)
			cout << mp[ arr[i] ] << endl;
			
	}
	
	return 0;
}
