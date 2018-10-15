#include<bits/stdc++.h>
using namespace std;

struct data{
	int x;
	char ch;
};

int main()
{
    int q, x, left = 0, right = 0;
    char ch;
    data arr[200010];
    
    cin >> q;
    while(q--)
    {
		cin >> ch >> x;
		if(ch == 'L')
		{
			++left;
			arr[x].ch = 'L';
			arr[x].x = left;
		}
		else if(ch == 'R')
		{
			++right;
			arr[x].ch = 'R';
			arr[x].x = right;
		}
		else
		{
			if(arr[x].ch == 'R')
			{
				cout << min(right-arr[x].x, left+arr[x].x-1) << endl;
			}
			else
			{
				cout << min(left-arr[x].x, right+arr[x].x-1) << endl;
			}
		}
	}
    
    
    return 0;
}
