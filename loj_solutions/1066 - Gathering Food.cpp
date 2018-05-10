#include <bits/stdc++.h>
using namespace std;
 
int dx[] = { 0, 0, -1, 1 };
int dy[] = { 1, -1, 0, 0 };
 
#define mem(a, n)        memset(a, n, sizeof(a))
#define pb               push_back
#define F                first
#define S                second
#define mpp              make_pair
#define FastIO           { ios_base::sync_with_stdio(false); cin.tie(0); }
 
char grid[15][15];
int dist[15][15], n;
vector < pair< char, pair<int,int> > > foods;
 
void bfs(int r, int c, char f)
{
	grid[r][c] = '.';
	int x, xx, y, yy;
 
	queue <int> qx, qy;
	qx.push(r);
	qy.push(c);
	while(!qx.empty())
	{
		x = qx.front();
		y = qy.front();
		qx.pop();
		qy.pop();
 
		for(int i = 0; i < 4; ++i)
		{
			xx = x+dx[i];
			yy = y+dy[i];
			if(xx>=0 && xx<n && yy>=0 && yy<n)
			{
				if(dist[xx][yy] == -1 && grid[xx][yy] != '#')
				{
					if(grid[xx][yy] == f)
					{
						dist[xx][yy] = dist[x][y]+1;
						return;
					}
					else if(grid[xx][yy] == '.')
					{
						dist[xx][yy] = dist[x][y]+1;
						qx.push(xx);
						qy.push(yy);
					}
				}
			}
		}
	}
}
 
int main()
{
	int t;
	scanf("%d", &t);
	for(int tc = 1; tc <= t; ++tc)
	{
		scanf("%d", &n);
		getchar();
 
		for(int i = 0; i < n; ++i)
			cin >> grid[i];
 
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				if(grid[i][j] >= 'A' && grid[i][j] <= 'Z')
					foods.pb( mpp(grid[i][j], mpp(i,j) ) );
 
		sort(foods.begin(), foods.end());
 
		int ans = 0;
		for(size_t i = 0; i+1 < foods.size(); ++i)
		{
			mem(dist, -1);
			dist[ foods[i].S.F ][ foods[i].S.S ] = ans;
 
			bfs(foods[i].S.F, foods[i].S.S, foods[i+1].F);			
			ans = dist[ foods[i+1].S.F ][ foods[i+1].S.S ];
 
			if(ans == -1)
				break;
		}
 
		printf("Case %d:", tc);
		if(ans != -1)
			printf(" %d\n", ans);
		else
			printf(" Impossible\n");
 
		foods.clear();
	}
 
	return 0;
}
