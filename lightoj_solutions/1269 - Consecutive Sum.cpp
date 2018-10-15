#include<bits/stdc++.h>
using namespace std;

int node[50005*32][5], nnode;

void init()
{
	nnode = 0;
	for(int i = 0; i < 5; ++i)
		node[0][i] = -1;
}

void insert(int mask)
{
	int now = 0, next;
	for(int i = 31; i >= 0; --i)
	{
		next = (mask >> i) & 1;
					
		if(node[now][next] == -1)
		{
			node[now][next] = ++nnode;
			for(int j = 0; j < 5; ++j)
				node[nnode][j] = -1;
		}
		now = node[now][next];
	}
}

int minn(int mask)
{
	int now = 0, ans = 0;
    for(int i = 31; i >= 0; --i)
	{
		int next = (mask >> i) & 1;
		if(node[now][next] != -1)
		{
			ans <<= 1;
			now = node[now][next];
		}
		else
		{
			ans <<= 1;
			++ans;
			now = node[now][next ^ 1];
		}
    }
    return ans;
}

int maxx(int mask)
{
	int now = 0, ans = 0;
    for(int i = 31; i >= 0; --i)
	{
		int next = ((mask >> i) & 1) ^ 1;
		if (node[now][next] != -1)
		{
			ans <<= 1;
			++ans;
			now = node[now][next];
		}
		else
		{
			ans <<= 1;
			now = node[now][next ^ 1];
		}
    }
    return ans;
}

int main()
{
	int t, n, x, mx, mn, temp;
	scanf("%d", &t);
	
	for(int tc = 1; tc <= t; ++tc)
	{
		init();
		insert(0);
		
		scanf("%d %d", &n, &x);
		mx = x;
		mn = x;
		temp = x;
		for(int i = 1; i < n; ++i)
		{
			scanf("%d", &x);
			temp ^= x;
			mx = max(mx, maxx(temp));
			mn = min(mn, minn(temp));
			insert(temp);
		}
		
		printf("Case %d: %d %d\n", tc, mx, mn);
	}
	
	return 0;
}
