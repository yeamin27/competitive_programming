#include<bits/stdc++.h>
using namespace std;

int nodes, edges, colors[210];
bool check;
vector <vector <int> > vec(210);

void DFS(int n, int color)
{
    colors[n] = color;

    int sz = vec[n].size();
    for(int i = 0; i < sz; ++i)
    {
        if(colors[vec[n][i]] != -1)
        {
            if(colors[vec[n][i]] == color)
            {
                check = false;
                return;
            }
        }
        else
            DFS(vec[n][i], 1-color);
    }
    return;
}
int main()
{
    int x, y;

    while(scanf("%d", &nodes) && nodes)
    {
        for(int i = 0; i < nodes; ++i)
            vec[i].clear();

        scanf("%d", &edges);
        for(int i = 0; i < edges; ++i)
        {
            scanf("%d %d", &x, &y);
            vec[x].push_back(y);
            vec[y].push_back(x);
        }
        memset(colors, -1, sizeof(colors));
        check = true;
        //colors[0] = 0;
        DFS(0, 0);
        if(check)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }

    return 0;
}

