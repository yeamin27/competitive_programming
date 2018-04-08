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

class Trie
{
	public:
	struct node {
		bool endmark;
		node* next[10];
		node()
		{
			endmark = false;
			for (int i = 0; i < 10	; i++)
				next[i] = NULL;
		}
	};
	node* root = new node();

	void insert(string str, int sz)
	{
		node* curr = root;
		for (int i = 0; i < sz; i++)
		{
			int id = str[i] - '0';
			if (curr->next[id] == NULL)
				curr->next[id] = new node();
			curr = curr->next[id];
		}
		curr->endmark = true;
	}
	
	bool search(string str, int sz)
	{
		node* curr = root;
		for (int i = 0; i < sz; i++)
		{
			int id = str[i] - '0';
			if (curr->next[id] == NULL)
				return false;
			curr = curr->next[id];
		}
		return curr->endmark;
	}
	
	void del(node* cur)
	{
		for(int i = 0; i < 10; i++)
			if(cur->next[i] != NULL)
				del(cur->next[i]);

		delete cur;
	}
};

int main()
{
	FastIO;
	int t, n;
	cin >> t;
	for(int tc = 0; tc < t; ++tc)
	{
		Trie boss;
		string str[10005];
		bool f = 0;
		
		cin >> n;
		for(int i = 0; i < n; ++i)
		{
			cin >> str[i];
			boss.insert(str[i], str[i].size());
		}
		
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < str[i].size()-1; ++j)
			{
				string s = str[i].substr(0, j+1);
				if(boss.search(s, j+1))
				{
					f = 1;
					break;
				}
			}
			if(f)
				break;
		}
		cas(tc+1);
		if(f)
			print(" NO\n");
		else
			print(" YES\n");
		boss.del(boss.root);
	}
	

	return 0;
}
