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


int main()
{
	ll t;
	string str;
	cin >> t;
	while(t--)
	{
		cin >> str;
		map<char, int> mp;
		
		for(size_t i = 0; i < str.size(); ++i)
			++mp[ str[i] ];
			
		if(mp[ str[0] ] == (int) str.size())
		{
			cout << -1 << endl;
			continue;
		}
		
		sort(str.begin(), str.end());
		cout << str << endl;
	}
		
	
	return 0;
}
