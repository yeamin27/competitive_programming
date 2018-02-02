#include<bits/stdc++.h>
using namespace std;

vector<int>vec[100005];
long long c1, c2;
bool visit[100005];

void BFS(int source, int node)
{
    int frnt, sz;
    queue<int>q1;
    queue<int>q2;
    c1 = 0;
    c2 = 0;

    q1.push(source);
	visit[1] = true;
    while(!q1.empty() || !q2.empty())
    {
	    while(!q1.empty())
	    {
	        frnt = q1.front();
	        q1.pop();
	        ++c1;
	        sz = vec[frnt].size();
	        for(int i = 0; i < sz; ++i)
	        {
	            if(!visit[vec[frnt][i]])
	            {
	                q2.push(vec[frnt][i]);
	                visit[vec[frnt][i]] = true;
	            }
	        }
	    }
	    while(!q2.empty())
	    {
	        frnt = q2.front();
	        q2.pop();
	        ++c2;
	        sz = vec[frnt].size();
	        for(int i = 0; i < sz; ++i)
	        {
	            if(!visit[vec[frnt][i]])
	            {
	                q1.push(vec[frnt][i]);
	                visit[vec[frnt][i]] = true;
	            }
	        }
	    }
	}

    return;
}

int main()
{
	int n, x, y;
	cin >> n;
	
	for(int i = 1; i < n; ++i)
	{
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	
	BFS(1, n);
	
	long long cnt = (c1*c2) - (n-1);
	
	cout << cnt << endl;
	
	return 0;
}
