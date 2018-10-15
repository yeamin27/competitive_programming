#include <bits/stdc++.h>
using namespace std;

#define mem(a, n)        memset(a, n, sizeof(a))
#define pb               push_back

int n, dist[110], dist_from_start[110], dist_from_end[110];
bool visit[110];
vector<int> vec[110];

void BFS(int s)
{
	int frnt;
	visit[s] = 1;
	queue<int> q;
	q.push(s);
	while(!q.empty())
	{
		frnt = q.front();
		q.pop();
		
		for(size_t i = 0; i < vec[frnt].size(); ++i)
		{
			if(!visit[ vec[frnt][i] ])
			{
				visit[ vec[frnt][i] ] = 1;
				dist[ vec[frnt][i] ] = dist[frnt]+1;
				q.push(vec[frnt][i]);
			}
		}
	}
	return;
}

int main()
{
	int t, r, start, end, ans, x, y;
	
	scanf("%d", &t);
	for(int tc = 1; tc <= t; ++tc)
	{
		scanf("%d %d", &n, &r);
		while(r--)
		{
			scanf("%d %d", &x, &y);
			vec[x].pb(y);
			vec[y].pb(x);
		}
		scanf("%d %d", &start, &end);
		
		mem(visit, 0);
		mem(dist, 0);
		BFS(start);
		for(int i = 0; i < n; ++i)
			dist_from_start[i] = dist[i];
		
		mem(visit, 0);
		mem(dist, 0);
		BFS(end);
		for(int i = 0; i < n; ++i)
			dist_from_end[i] = dist[i];
		
		ans = -1;
		for(int i = 0; i < n; ++i)
			ans = max(ans, dist_from_start[i]+dist_from_end[i]);
		
		
		printf("Case %d: %d\n", tc, ans);
		
		for(int i = 0; i < n; ++i)
			vec[i].clear();
	}
	
	return 0;
}
