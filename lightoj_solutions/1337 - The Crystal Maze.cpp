#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll MX = 2e18+10;
const ll MN = -2e18+10;
const ll inf = 1LL << 62;
const double pi = acos(-1);

int dx[] = { 0, 0, -1, 1 };
int dy[] = { 1, -1, 0, 0 };

int dxx[] = { 1, 1, 1, 0, 0, -1, -1, -1 };
int dyy[] = { 1, 0, -1, 1, -1, 1, 0, -1 };

#define LCM(a,b)         (a / __gcd(a,b) ) *b
#define gcd(a,b)         __gcd(a,b)
#define mem(a, n)        memset(a, n, sizeof(a))
#define pb               push_back
#define ppb              pop_back
#define min3(a, b, c)    min(a, min(b, c))
#define max3(a, b, c)    max(a, max(b, c))
#define F                first
#define S                second
#define mpp              make_pair
#define FastIO           { ios_base::sync_with_stdio(false); cin.tie(0); }

#define YES              cout << "YES" << endl
#define NO               cout << "NO" << endl
#define fYES             printf("YES\n")
#define fNO              printf("NO\n")
#define cas(a)           cout << "Case " << a << ":"
#define fcas(a)          printf("Case %d:\n", a)
#define spc              " "
#define nln              "\n"


#define print(args...)   print(args)
#define fprint(args...)  fprint(args)
#define scan(args...)    scan(args)
#define deb(args...)     deb(args)

void print() { return; }
template<typename T, typename... Args> void print(T a, Args... args) { cout << a; print(args...); }
void fprint() { return; }
template<typename T, typename... Args> void fprint(T a, Args... args) { printf("%I64d ", a); fprint(args...); }
void scan() { return; }
template<typename T, typename... Args> void scan(T *a, Args... args) { cin >> *a; scan(args...); }
void deb() { cerr << endl; }
template<typename T, typename... Args> void deb(T a, Args... args) { cerr << a << " "; deb(args...); }

inline void fscan(ll *a)                            { scanf("%I64d", a); }
inline void fscan(ll *a, ll *b)                     { scanf("%I64d %I64d", a, b); }
inline void fscan(ll *a, ll *b, ll *c)              { scanf("%I64d %I64d %I64d", a, b, c); }
inline void fscan(ll *a, ll *b, ll *c, ll *d)       { scanf("%I64d %I64d %I64d %I64d", a, b, c, d); }
inline void fscan(int *a)                           { scanf("%d", a); }
inline void fscan(int *a, int *b)                   { scanf("%d %d", a, b); }
inline void fscan(int *a, int *b, int *c)           { scanf("%d %d %d", a, b, c); }
inline void fscan(int *a, int *b, int *c, int *d)   { scanf("%d %d %d %d", a, b, c, d); }

int m, n, crystal[510][510];
char grid[510][510];
bool visit[510][510];

void bfs(int r, int c)
{
	int cnt = 0, x, y, xx, yy;
	queue <pair <int,int> > lst;
	queue <int>	qx, qy;
	
	visit[r][c] = 1;
	
	qx.push(r);
	qy.push(c);
	
	if(grid[r][c] != '#')
		lst.push( mpp(r,c) );
	
	if(grid[r][c] == 'C')
		++cnt;
	
	while(!qx.empty())
	{
		x = qx.front();
		y = qy.front();
		qx.pop();
		qy.pop();
		
		for(int i = 0; i < 4; ++i)
		{
			xx = x+dx[i];
			yy = y+dy[i];
			
			if(xx>=0 && xx<m && yy>=0 && yy<n)
			{
				if(!visit[xx][yy] && grid[xx][yy] != '#')
				{
					visit[xx][yy] = 1;
					qx.push(xx);
					qy.push(yy);
					lst.push( mpp(xx, yy) );
					
					if(grid[xx][yy] == 'C')
						++cnt;
				}
			}
		}
	}
	
	while(!lst.empty())
	{
		x = lst.front().F;
		y = lst.front().S;
		lst.pop();
		
		crystal[x][y] = cnt;
	}
}

int main()
{
	int t, q, x, y;
	
	fscan(&t);
	for(int tc = 1; tc <= t; ++tc)
	{
		fscan(&m, &n, &q);
		getchar();
		for(int i = 0; i < m; ++i)
		{
			for(int j = 0; j < n; ++j)
				scanf("%c", &grid[i][j]);
			getchar();
		}
		
		mem(visit, 0);
		mem(crystal, 0);
		
		for(int i = 0; i < m; ++i)
			for(int j = 0; j < n; ++j)
				if(!visit[i][j])
					bfs(i, j);
			
		fcas(tc);		
		while(q--)
		{
			fscan(&x, &y);
			printf("%d\n", crystal[x-1][y-1]);
		}
	}
			

	return 0;
}
