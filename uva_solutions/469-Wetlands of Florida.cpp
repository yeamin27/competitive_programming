#include<bits/stdc++.h>
using namespace std;

int rrr[] = {+0,+0,+1,-1,-1,+1,-1,+1};
int ccc[] = {-1,+1,+0,+0,+1,+1,-1,-1};

char grid[105][105], str[105], store[105][105];
int row, col, area;

struct data
{
    int row, col;
};

void BFS(int row1, int col1)
{
    ++area;
    int rr, cc, x, y;
    data temp;
    queue <data> Q;

    grid[row1][col1] = 'L';
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
            if(x >= 0 && x < row && y >= 0 && y < col)
            {
                if(grid[x][y] == 'W')
                {
                    ++area;
                    grid[x][y] = 'L';
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
    int t;
    scanf("%d", &t);
    getchar();
    getchar();

    for(int tc = 1; tc <= t; ++tc)
    {
        row = 0;
        col = 0;
        while(scanf("%[^\n]", str) && strlen(str) > 0)
        {
            if(str[0] == 'W' || str[0] == 'L')
            {
                strcpy(store[row], str);
                ++row;
                col = strlen(str);
            }
            else
            {
                int x , y;
                sscanf(str, "%d %d", &x, &y);

				for(int i = 0; i < row; ++i)
					strcpy(grid[i], store[i]);

                area = 0;
                BFS(x-1, y-1);

                printf("%d\n", area);
            }
            char null = getchar();
            if(null != '\0')
                break;
        }
        if(t > tc)
        {
            printf("\n");
            getchar();
        }
    }

    return 0;
}

