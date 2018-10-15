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

int vampires, lykans;
bool visit[20005];
vector <int> vec[20005];

void BFS(int source)
{
    int frnt;
    queue <int> V,L;

	V.push(source);		    
    while( !V.empty() || !L.empty() )
    {
		if(!V.empty())
		{
			frnt = V.front();
			V.pop();
			for(size_t i = 0; i < vec[frnt].size(); ++i)
			{
				if(visit[ vec[frnt][i] ] == 0)
				{
					L.push( vec[frnt][i] );
					visit[ vec[frnt][i] ] = 1;
					++lykans;
				}
			}
		}
		
		if(!L.empty())
		{
			frnt = L.front();
			L.pop();
			for(size_t i = 0; i < vec[frnt].size(); ++i)
			{
				if(visit[ vec[frnt][i] ] == 0)
				{
					V.push( vec[frnt][i] );
					visit[ vec[frnt][i] ] = 1;
					++vampires;
				}
			}
		}
    }

    return;
}

int main()
{
	int t, n, mx, x, y, ans;
	
	fscan(&t);
	for(int tc = 1; tc <= t; ++tc)
	{
		fscan(&n);
		mx = -1;
		
		while(n--)
		{
			fscan(&x, &y);
			mx = max3(x, y, mx);
			vec[x].pb(y);
			vec[y].pb(x);
		}
		
		ans = 0;
		mem(visit, 0);
		for(int i = 0; i <= mx; ++i)
		{
			vampires = lykans = 0;
			if(!vec[i].empty() && !visit[i])
				BFS(i);
			ans += max(vampires, lykans);
		}		
		printf("Case %d: %d\n", tc, ans);
		
		for(int i = 0; i <= mx; ++i)
			vec[i].clear();
	}
	

	return 0;
}
