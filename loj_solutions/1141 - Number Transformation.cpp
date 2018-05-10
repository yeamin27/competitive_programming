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

ll mask[1010];	
void sieve() { ll N=1000,sq=sqrt(N),i,j; for(i=4;i<=N;i+=2)mask[i]=1; for(i=3;i<=sq;i+=2){ if(mask[i]==0){ for(j=i*i;j<=N;j+=i)mask[j]=1; } } mask[1]=1;mask[0]=1; }

bool grid[1010][1010];
int dist[1010], s, e;

void bfs(int n)
{
	dist[n] = 0;
	queue <int> q;
	q.push(n);
	
	while(!q.empty())
	{
		int f = q.front();
		q.pop();
		for(int i = s; i <= e; ++i)
		{
			if(grid[f][i] && dist[i] == -1)
			{
				dist[i] = dist[f]+1;
				q.push(i);
			}
		}
	}
}

int main()
{
	sieve();
	vector <int> prime;
	for(int i = 2; i < 1010; ++i)
		if(!mask[i])
			prime.pb(i);
			
	int t;
	fscan(&t);
	for(int tc = 1; tc <= t; ++tc)
	{
		fscan(&s, &e);
		
		mem(grid, 0);
		mem(dist, -1);
		
		int f;
		map<int, bool> mp;
		queue <int> q;
		q.push(s);
		while(!q.empty())
		{
			f = q.front();
			q.pop();
			for(size_t i = 0; i<prime.size() && f+prime[i]<=e; ++i)
			{
				if(f == prime[i])
					continue;
					
				if(f % prime[i] == 0)
				{
					grid[f][ f+prime[i] ] = 1;
					
					if(!mp[ f+prime[i] ])
						q.push(f+prime[i]);
					mp[ f+prime[i] ] = 1;
				}
			}
		}
		bfs(s);
		fcas(tc);
		printf(" %d\n", dist[e]);
	}
	

	return 0;
}
