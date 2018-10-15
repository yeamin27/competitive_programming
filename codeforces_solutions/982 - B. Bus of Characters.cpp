#include<bits/stdc++.h>
using namespace std;

struct data
{
	int in;
	long int w;
	bool l, r;
};

bool cmp(data x, data y)
{
	return x.w < y.w;
}

int main()
{
	int n;
	data arr[200005];
	
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i].w;
		arr[i].in = i+1;
		arr[i].l = 0;
		arr[i].r = 0;
	}
	
	sort(arr, arr+n, cmp);
	
	int ll = 0, rr;
	stack <int> stk;
	string str;
	
	cin >> str;
	for(size_t i = 0; i < str.size(); ++i)
	{
		if(str[i] == '0')
		{
			cout << arr[ll].in << " ";
			arr[ll].l = 1;
			stk.push(ll);
			++ll;
		}
		
		else
		{
			rr = stk.top();
			stk.pop();
			
			cout << arr[rr].in << " ";
			arr[rr].r = 1;
		}
	}
	
	cout << endl;
	
	return 0;
		
}
