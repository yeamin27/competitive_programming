#include<bits/stdc++.h>
using namespace std;

int node, M, D;
int dist[2550], freq[2550];
vector < int > e[2550];

void BFS(int source)
{
    int frnt, i, s;
    queue<int>Q;

    dist[source] = 0;
    Q.push(source);

    while(Q.size())
    {

        frnt = Q.front();
        Q.pop();
        s = e[frnt].size();

        for(i = 0; i < s; ++i)
        {
            if(dist[e[frnt][i]] == -1)
            {

                Q.push(e[frnt][i]);
                dist[e[frnt][i]] = dist[frnt] + 1;
                ++freq[ dist[ e[frnt][i] ] ];
            }
        }
        for(i = 0; i < node; ++i)
        {
            if(M < freq[i])
            {
                M = freq[i];
                D = i;
            }
        }
    }

    return;
}

int main()
{
    int n, y, z, t;
    scanf("%d", &node);
    for(int i = 0; i < node; ++i)
    {
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &y);
            e[i].push_back(y);
        }
    }
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &z);
        if(e[z].size() == 0)
            printf("0\n");
        else
        {
            M = -1;
            D = -1;
            memset(dist, -1, sizeof(dist));
            memset(freq, 0, sizeof(freq));
            BFS(z);
            printf("%d %d\n", M, D);
        }
    }

    return 0;
}
