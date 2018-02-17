#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, total = 0, x, y;
    char ch[60][60];
	string moves = "0123";
	string s;
	
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j )
        {
            cin >> ch[i][j];
            
            if(ch[i][j] == 'S')
            {
                x = i;
                y = j;
            }
        }
    }
    cin >> s;

    do
    {
        bool flag = false;
        int xx = x, yy = y;

        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == moves[0])
                xx++;
            
            if(s[i] == moves[1])
                xx--;
            
            if(s[i] == moves[2])
                yy++;
            
            if(s[i] == moves[3])
                yy--;
            

            if( (xx < 0) || (xx >= n) || (yy >= m) || (yy < 0) || ch[xx][yy] == '#')
            {
                flag = false;
                break;
            }
            
            if(ch[xx][yy] == 'E')
            {
                flag = true;
                break;
            }
        }
        
        if(flag == true)
        {
            ++total;
        }
    }
    while( next_permutation(moves.begin(), moves.end()) );

	cout << total << endl;
    return 0;
}
