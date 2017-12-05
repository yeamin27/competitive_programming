#include<bits/stdc++.h>
using namespace std;

int rrr[] = {1,0,-1,0,0,0};
int ccc[] = {0,1,0,-1,0,0};
int hhh[] = {0,0,0,0,-1,1};

char grid[50][50][50];
int dist[50][50][50];
int mx_row, mx_col, mx_level;

struct data
{
    int level, row, col;
};

void BFS(int l, int r, int c)
{
    int rr, cc, ll, x, y, z;
    data temp;
    queue <data> Q;

    temp.level = l;
    temp.row = r;
    temp.col = c;

    dist[l][r][c] = 0;

    Q.push(temp);
    while(!Q.empty())
    {
        temp = Q.front();
        Q.pop();

        ll = temp.level;
        rr = temp.row;
        cc = temp.col;
        for(int i = 0; i < 6; ++i)
        {
            x = rr + rrr[i];
            y = cc + ccc[i];
            z = ll + hhh[i];
            if((x >= 0 && x < mx_row) && (y >= 0 && y < mx_col) && (z >= 0 && z <= mx_level))
            {
                if(grid[z][x][y] == '.' || grid[z][x][y] == 'E')
                {
                    grid[z][x][y] = '#';
                    dist[z][x][y] = dist[ll][rr][cc] + 1;
                    temp.row = x;
                    temp.col = y;
                    temp.level = z;
                    Q.push(temp);
                }
            }
        }
    }

    return;
}

int main()
{
    int sl, sr, sc, dl, dr, dc;

    while(scanf("%d %d %d", &mx_level, &mx_row, &mx_col) && mx_level && mx_row && mx_col)
    {
        getchar();
        for(int i = 0; i < mx_level; ++i)
        {
            for(int j = 0; j < mx_row; ++j)
            {
                for(int k = 0; k < mx_col; ++k)
                {
                    cin >> grid[i][j][k];
                    if(grid[i][j][k] == 'S')
                    {
                        sl = i;
                        sr = j;
                        sc = k;
                    }
                    if(grid[i][j][k] == 'E')
                    {
                        dl = i;
                        dr = j;
                        dc = k;
                    }
                }

                getchar();
            }
            getchar();
        }

        memset(dist, -1, sizeof dist);
        BFS(sl, sr, sc);

        if(dist[dl][dr][dc] == -1)
            printf("Trapped!\n");
        else
            printf("Escaped in %d minute(s).\n", dist[dl][dr][dc]);
    }

    return 0;
}
