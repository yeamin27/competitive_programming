#include<bits/stdc++.h>
using namespace std;
int visited[10010], flag, m, mark;
vector <int> grid[10010];

void cycle(int n)
{
    int sz = grid[n].size();
    visited[n] = 1;

    for(int i = 0; i < sz; ++i)
    {
        if(grid[n][i] == mark)
        {
            flag = 1;
            return;
        }

        else if(visited[grid[n][i]] == -1)
            cycle(grid[n][i]);
    }

    return;
}

int main()
{
    int T;
    string s,t;
    map <string,int> mp;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> m;
        mp.clear();
        memset(grid, 0, sizeof grid);
        flag = 0;

        int track = 1;
        for(int j = 0; j < m; j++)
        {
            cin >> s >> t;
            if(!mp[s])
                mp[s] = track++;

            if(!mp[t])
                mp[t] = track++;

            grid[mp[s]].push_back(mp[t]);
        }

        for(int k = 1; k <= m; ++k)
        {
            memset(visited, -1, sizeof visited);
            mark = k;
            cycle(k);

            if(flag == 1)
                break;
        }

        if(flag == 1)
            printf("Case %d: No\n", i);
        else
            printf("Case %d: Yes\n", i);
    }

    return 0;
}
