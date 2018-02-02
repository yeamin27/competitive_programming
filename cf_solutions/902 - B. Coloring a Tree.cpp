#include <bits/stdc++.h>
using namespace std;
int n, color[10010], col[10010];
vector <int> grid[10010];

void BFS(int source, int c)
{
    int frnt, i;
    queue<int>Q;

    Q.push(source);
    while(!Q.empty())
    {
        frnt = Q.front();
        Q.pop();
        for(i = 0; i < grid[frnt].size(); ++i)
        {
			Q.push(grid[frnt][i]);
			col[grid[frnt][i]] = c;
        }
    }

    return;
}


int main()
{
	int x;
	cin >> n;
	
	for(int i = 2; i <= n; ++i)
	{
		cin >> x;
		grid[x].push_back(i);
	}
	
	for(int i = 1; i <= n; ++i)
	{
		cin >> color[i];
	}
		
	queue<int> q;
	q.push(1);
	int cnt = 0;
	while(!q.empty())
	{
		int t = q.front();
		q.pop();
		if(col[t] != color[t])
		{
			++cnt;
			col[t] = color[t];
			BFS(t, color[t]);
		}
		for(int i = 0; i < grid[t].size(); ++i)
		{
			q.push(grid[t][i]);
		}
	}
		
	cout << cnt << endl;
	return 0;
}
