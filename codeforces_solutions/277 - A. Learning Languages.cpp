#include<iostream>
using namespace std;
 
bool arr[105][105], visit[105];
int n, m;
 
void dfs(int i)
{
    visit[i] = true;
    for(int j = 1; j <= m; ++j)
    {
        if(arr[j][i])
        {
            for(int k = 1; k <= n; ++k)
            {
                if(!visit[k] && arr[j][k])
                    dfs(k);
            }
        }
    }
    
    return;
}
 
int main()
{
	int k, l, cnt = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        cin >> k;
        if(k == 0)
			++cnt;
        for(int j = 1; j <= k; j++)
        {
            cin >> l;
            arr[l][i] = true;
        } 
    }
    
    if(cnt == n)
    {
		cout << n << endl;
		return 0;
	}
    int ans = -1;
    for(int i = 1; i <= n; ++i)
    {
        if(!visit[i])
        {
            ++ans;
            dfs(i); 
        }
    }
    
    cout << ans;
    return 0;
}
