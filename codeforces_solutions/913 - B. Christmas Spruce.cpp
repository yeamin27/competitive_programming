#include<bits/stdc++.h>
using namespace std;

int grid[1010][1010], n;
bool flag, arr[1010];

void BFS(int source)
{
    int frnt, i;
    queue<int>Q;

    Q.push(source);
    while(!Q.empty())
    {
		int temp = 0, cnt = 0;
        frnt = Q.front();
        Q.pop();
        for(i = 1; i <= n; ++i)
        {
            if(grid[frnt][i] == 1)
            {
				++cnt;
                Q.push(i);
                if(arr[i] == false)
					++temp;
            }
        }
        if(cnt > 0 && temp < 3)
        {
			cout << "NO" << endl;
			flag = true;
			return;
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
		grid[x][i] = 1;
		arr [x] = true;
	}
	
	BFS(1);
	
	if(flag == false)
		cout << "YES" << endl;
	return 0;
}


