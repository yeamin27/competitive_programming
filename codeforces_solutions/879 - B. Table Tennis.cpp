#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, x;
	queue <int> ls;
	long int k;
	
	cin >> n >> k;
	for(int i = 0; i < n; ++i)
	{
		cin >> x;
		ls.push(x);
	}
		
	if(k >= n-1)
	{
		cout << n << endl;
		return 0;
	}
	
	int cnt, p1, p2, flag = 0;
	
	p1 = ls.front();
	ls.pop();
	while(1)
	{
		if(!flag)
			cnt = 0;
		while(cnt <= k)
		{
			p2 = ls.front();
			ls.pop();
			if(p2 > p1)
			{
				ls.push(p1);
				p1 = p2;
				flag = cnt = 1;
				break;
			}
			++cnt;
			ls.push(p2);
			
			if(cnt == k)
			{
				cout << p1 << endl;
				return 0;
			}
		}
	}
}
