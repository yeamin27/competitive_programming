#include<bits/stdc++.h>
using namespace std;

int grid[1010][1010], mx_row, mx_col, dr, dc, cnt, temp[4];
int rrr[]= {1,0,-1,0};
int ccc[]= {0,1,0,-1};

struct data
{
    int row, col;
};
void BFS(int row1, int col1)
{
    int rr, cc, x, y;
    data temp;
    queue <data> Q;

    grid[row1][col1] = 0;
    temp.row = row1;
    temp.col = col1;
    Q.push(temp);
    while(!Q.empty())
    {
        temp = Q.front();
        Q.pop();

        rr = temp.row;
        cc = temp.col;
        for(int i = 0; i < 4; ++i)
        {
            x = rr + rrr[i];
            y = cc + ccc[i];
            if(x >= 0 && x < mx_row && y >= 0 && y < mx_col)
            {
                if(grid[x][y] == -1)
                {
                    grid[x][y] = 1+grid[rr][cc];
                    temp.row = x;
                    temp.col = y;
                    Q.push(temp);
                }
            }
        }
    }

    return;
}

int main()
{
    int r, x, n, y, sr, sc, ans;
    while(scanf("%d %d", &mx_row, &mx_col) && mx_row && mx_col)
    {
        memset(grid, -1, sizeof grid);

        scanf("%d", &r);
        for(int i = 0; i < r; ++i)
        {
            scanf("%d %d", &x, &n);
            while(n--)
            {
                scanf("%d", &y);
                grid[x][y] = -2;
            }
        }
        scanf("%d %d %d %d", &sr, &sc, &dr, &dc);
        BFS(sr, sc);
        printf("%d\n", grid[dr][dc]);
    }

    return 0;
}
