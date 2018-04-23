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
#define fcas(a)          printf("Case %d:", a)
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

inline int  Set(int N, int pos)                     { return N = N | (1 << pos); }
inline bool check(int N, int pos)                   { return (N = N & (1 << pos)); }

inline bool isVowel(char a)  { a=tolower(a); if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))return true; return false; }
inline ll   fact(int n)      { ll ans = 1; for(int i = 2; i <= n; ++i)ans *= i; return ans; }

ll bigMod(ll b,ll p,ll m)    { if(p==0)return 1%m; ll x=bigMod(b,p/2,m); x=(x*x)%m; if(p&1)x=(x*b)%m; return x; }
ll pwr(ll n,int k)           { ll temp=0; if(k==0)return 1; temp=pwr(n,k/2); if(k&1)return n*temp*temp; else return temp*temp; }

ll prime[1100003];	
void sieve() { ll N=1100002,sq=sqrt(N),i,j; for(i=4;i<=N;i+=2)prime[i]=1; for(i=3;i<=sq;i+=2){ if(prime[i]==0){ for(j=i*i;j<=N;j+=i)prime[j]=1; } } prime[1]=1;prime[0]=1; }

ll ncr[1010][1010];
ll nCr(int n, int r) { if(n<r)return 0; if(n==r)return 1; if(r==1)return n; if(ncr[n][r] != -1)return ncr[n][r]; return  ncr[n][r]=nCr(n-1,r)+nCr(n-1,r-1); }

int d[22][22], n, m;
bool visit[22][22];
char grid[22][22];

void BFS(int rr, int cc)
{
	int fx, fy, x, y;
	queue<int> qx, qy;
	
	qx.push(rr);
	qy.push(cc);
	while(!qx.empty())
	{
		fx = qx.front();
		fy = qy.front();
		
		qx.pop();
		qy.pop();
		
		for(int i = 0; i < 4; ++i)
		{
			x = fx + dx[i];
			y = fy + dy[i];
			
			if(x>=0 && x<m && y>=0 && y<n)
			{
				if( (grid[x][y] == '.' || grid[x][y] == 'a'|| grid[x][y] == 'b'|| grid[x][y] == 'c') && !visit[x][y] )
				{
					d[x][y] = d[fx][fy]+1;
					visit[x][y] = 1;
					qx.push(x);
					qy.push(y);
				}
			}
		}
	}
}

int main()
{
	int t, hx, hy, ax, ay, bx, by, cx, cy;
	
	fscan(&t);
	for(int tc = 1; tc <= t; ++tc)
	{
		fscan(&m, &n);
		getchar();
		for(int i = 0; i < m; ++i)
		{
			for(int j = 0; j < n; ++j)
			{
				scanf("%c", &grid[i][j]);
				if(grid[i][j] == 'a')
					ax = i, ay = j;
				else if(grid[i][j] == 'b')
					bx = i, by = j;
				else if(grid[i][j] == 'c')
					cx = i, cy = j;
				else if(grid[i][j] == 'h')
					hx = i, hy = j;
			}
			getchar();
		}
		
		mem(d, 0);
		mem(visit, 0);
		BFS(hx, hy);
		
		printf("Case %d: %d\n", tc, max3( d[ax][ay], d[bx][by], d[cx][cy]) );
	}
		
	

	return 0;
}
