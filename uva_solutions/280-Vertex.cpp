#include<bits/stdc++.h>
using namespace std;

int nodes, edges, visit[200], cnt;
vector <int> vec[200];

void DFS(int n)
{
    int sz = vec[n].size();

    for(int i = 0; i < sz; ++i)
    {
        if(visit[vec[n][i]] == -1)
        {
            visit[vec[n][i]] = 1;
            --cnt;
            DFS(vec[n][i]);
        }
    }

    return;
}

int main()
{
    int x, y, z, t, arr[200];

    while(scanf("%d", &nodes) && nodes)
    {
        for(int i = 0; i <= nodes; i++)
            vec[i].clear();

        while(scanf("%d", &x) && x)
        {
            while(scanf("%d", &y) && y)
            {
                vec[x].push_back(y);
            }
        }
        scanf("%d", &t);
        while(t--)
        {
            scanf("%d", &z);
            memset(visit, -1, sizeof(visit));
            cnt = nodes;
            DFS(z);

            printf("%d", cnt);
            for(int i = 1; i <= nodes; ++i)
            {
                if(visit[i] == -1)
                    printf(" %d", i);
            }
            printf("\n");
        }
    }

    return 0;
}
