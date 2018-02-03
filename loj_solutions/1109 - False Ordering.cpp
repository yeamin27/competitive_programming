#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll MX = 2e18+10;
const ll MN = -2e18+10;
const ll inf = 1LL << 62;
const double pi = acos(-1);

int dx4[] = { 0, 0, -1, 1 };
int dy4[] = { 1, -1, 0, 0 };

int dx[] = { 1, 1, 1, 0, 0, -1, -1, -1 };
int dy[] = { 1, 0, -1, 1, -1, 1, 0, -1 };

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
#define spc              " "
#define nln              "\n"


#define print(args...)   print(args)
#define fprint(args...)  fprint(args)
#define scan(args...)    scan(args)
#define deb(args...)     deb(args)

void print() { return; }
template<typename T, typename... Args> void print(T a, Args... args) { cout << a; print(args...); }

void fprint() { return; }
template<typename T, typename... Args> void fprint(ll a, Args... args) { printf("%I64d", a); fprint(args...); }

void scan() { return; }
template<typename T, typename... Args> void scan(T *a, Args... args) { cin >> *a; scan(args...); }

void deb() { cerr << endl; }
template<typename T, typename... Args> void deb(T a, Args... args) { cerr << a << " "; deb(args...); }

inline void fscan(ll *a)                      { scanf("%I64d", a); }
inline void fscan(ll *a, ll *b)               { scanf("%I64d %I64d", a, b); }
inline void fscan(ll *a, ll *b, ll *c)        { scanf("%I64d %I64d %I64d", a, b, c); }
inline void fscan(ll *a, ll *b, ll *c, ll *d) { scanf("%I64d %I64d %I64d %I64d", a, b, c, d); }

inline int Set(int N, int pos)                { return N = N | (1 << pos); }
inline bool check(int N, int pos)             { return N = N & (1 << pos); }

inline bool isVowel(char a)
{
    a = toupper(a);
    if((a == 'A') || (a == 'E') || (a == 'I') || (a == 'O') || (a == 'U'))
        return true;
        
    return false;
}

ll bigMod(ll b, ll p, ll m)
{
    if(p == 0)
        return 1 % m;
    
    ll x = bigMod(b, p/2, m);
    x = (x * x) % m;
    
    if(p&1)
        x = (x * b) % m;
    
    return x;
}

ll fact(ll n)
{
    if(n == 1)
        return 1;
        
    return n*fact(n-1);
}

ll pwr(ll n, int k)
{
    ll temp = 0;
    if(k == 0)
        return 1;
        
    temp = pwr(n, k/2);
    
    if(k&1)
        return n*temp*temp;
    else
        return temp*temp;
}

ll p[1100002];	
void sieve()
{
    ll N = 1100002, sq = sqrt(N), i, j;
    
    for(i = 4; i <= N; i+=2)
        p[i] = 1;
        
    for(i = 3; i <= sq; i += 2)
    {
        if(p[i] == 0)
        {
            for(j = i*i; j <= N; j += i)
            {
                p[j] = 1;
            }
        }
    }
    p[1] = 1;
    p[0] = 1;
}

struct data {
	int no, d;
};
data arr[1010];

bool cmp(data a, data b)
{
	if(a.d == b.d)
		return a.no > b.no;
		
	return a.d < b.d;
}

int main()
{
	int t, n;
	
	for(int i = 1; i <= 1000; ++i)
        for(int j = i; j <= 1000; j += i)
            ++arr[j-1].d;
            
    for(int i = 0; i < 1000; ++i)
		arr[i].no = i+1;
		
	sort(arr, arr+1000, cmp);
	scan(&t);
	for(int i = 0; i < t; ++i)
	{
		scan(&n);
		printf("Case %d: %d\n", i+1, arr[n-1].no);
	}
	return 0;
}

