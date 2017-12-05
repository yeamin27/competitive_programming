
#include<bits/stdc++.h>
using namespace std;

int rrr[] = {+0,+0,+1,-1,-1,+1,-1,+1};
int ccc[] = {-1,+1,+0,+0,+1,+1,-1,-1};

char grid[200][200];
int mx_row, mx_col, cnt;

struct data
{
    int row, col;
};

void BFS(int row1, int col1)
{
    ++cnt;
    int rr, cc, x, y;
    data temp;
    queue <data> Q;

    grid[row1][col1] = 'v';
    temp.row = row1;
    temp.col = col1;

    Q.push(temp);
    while(!Q.empty())
    {
        temp = Q.front();
        Q.pop();

        rr = temp.row;
        cc = temp.col;
        for(int i = 0; i < 8; ++i)
        {
            x = rr + rrr[i];
            y = cc + ccc[i];
            if(x >= 0 && x < mx_row && y >= 0 && y < mx_col)
            {
                if(grid[x][y] == '@')
                {
                    grid[x][y] = 'v';
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
    while(scanf("%d", &mx_row) && mx_row)
    {
        scanf("%d", &mx_col);
        getchar();

        for(int i = 0; i < mx_row; ++i)
        {
            for(int j = 0; j < mx_col; ++j)
                scanf("%c", &grid[i][j]);

            getchar();
        }

        cnt = 0;
        for(int i = 0; i < mx_row; ++i)
        {
            for(int j = 0; j < mx_col; ++j)
            {
                if(grid[i][j] == '@')
                    BFS(i, j);
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
