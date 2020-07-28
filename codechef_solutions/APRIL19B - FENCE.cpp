#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

#define FastIO                { ios_base::sync_with_stdio(false); cin.tie(0); }
#define line                  cout<<endl;
#define deb(n)                cerr<<#n<<" |"<<n<<"|"<<endl;
#define debb(n, m)            cerr<<#n<<" |"<<n<<"| :: "<<#m<<" |"<<m<<"|"<<endl;
#define debbb(n, m, l)        cerr<<#n<<" |"<<n<<"| :: "<<#m<<" |"<<m<<"| :: "<<#l<<" |"<<l<<"|"<<endl;
#define debbbb(n, m, l, x)    cerr<<#n<<" |"<<n<<"| :: "<<#m<<" |"<<m<<"| :: "<<#l<<" |"<<l<<"| :: "<<#x<<" |"<<x<<"|"<<endl;
#define YES                   cout << "YES" << endl
#define NO                    cout << "NO" << endl
#define Yes                   cout << "Yes" << endl
#define No                    cout << "No" << endl
#define yes                   cout << "yes" << endl
#define no                    cout << "no" << endl
#define cas(a)                cout << "Case " << a << ": "

#define F                     first
#define S                     second
#define mpp                   make_pair
#define pb                    push_back
#define ppb                   pop_back
#define gcd(a,b)              __gcd(a,b)
#define lcm(a,b)              (a / __gcd(a,b) ) *b
#define odd(a)                ((a&1)==1)
#define even(a)               ((a&1)==0)
#define min3(a, b, c)         min(a, min(b, c))
#define max3(a, b, c)         max(a, max(b, c))
#define mem(a, n)             memset(a, n, sizeof(a))
#define SZ(x)                 ((int)(x.size()))
#define all(x)                (x.begin(), x.end())
#define rep(a,b)              for(int zz = a; zz < b; ++zz)
#define repr(a, b)            for(int zz = a; zz > b; --zz)
#define show_arr(ara, l, r)   for(int iii  = l; iii < r; iii++) cout<<ara[iii]<<" "; line
#define show_arrln(ara, l, r) for(int iii  = l; iii < r; iii++) cout<<ara[iii]<<endl;

//~ inline int  Set(int N, int pos)                     { return N = N | (1 << pos); }
//~ inline bool Check(int N, int pos)                   { return (N = N & (1 << pos)); }

//~ inline bool isVowel(char a)  { a=tolower(a); if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))return true; return false; }
//~ inline ll   fact(int n)      { ll ans = 1; for(int i = 2; i <= n; ++i)ans *= i; return ans; }

//~ ll bigMod(ll b,ll p,ll m)    { if(p==0)return 1%m; ll x=bigMod(b,p/2,m); x=(x*x)%m; if(p&1)x=(x*b)%m; return x; }
//~ ll pwr(ll n,int k)           { ll temp=0; if(k==0)return 1; temp=pwr(n,k/2); if(k&1)return n*temp*temp; else return temp*temp; }

//~ ll prime[1100003];	
//~ void sieve() { ll N=1100002,sq=sqrt(N),i,j; for(i=4;i<=N;i+=2)prime[i]=1; for(i=3;i<=sq;i+=2){ if(prime[i]==0){ for(j=i*i;j<=N;j+=i)prime[j]=1; } } prime[1]=1;prime[0]=1; }

//~ ll ncr[1010][1010];
//~ ll nCr(int n, int r) { if(n<r)return 0; if(n==r)return 1; if(r==1)return n; if(ncr[n][r] != -1)return ncr[n][r]; return  ncr[n][r]=nCr(n-1,r)+nCr(n-1,r-1); }

int dx[] = { 0, 0, -1, 1 };
int dy[] = { 1, -1, 0, 0 };

ull t, n, m, k, f, x, y, xx, yy, tmp;
ull ans, cnt;

int main()
{
	FastIO;
	scanf("%llu", &t);
	while(t--)
	{
		map< pair<ll,ll>, bool >mp;
		scanf("%llu %llu %llu", &n, &m, &k);
		
		cnt = 0;
		for(ull i = 0; i < k; ++i)
		{
			scanf("%llu %llu", &x, &y);
			x += x-1;
			y += y-1;
			
			f = 0;
			for(int j = 0; j < 4; ++j)
			{
				xx = x+dx[j];				
				yy = y+dy[j];
				
				if(mp[ {xx,yy} ])
					++f;
					
				mp[ {xx,yy} ] = 1;
				//~ debbbb(xx, yy, j, f);
			}
					
			f += f;
			if(!f)
				cnt += 4;				
			else
				cnt += max(4-f, 0ull);
			//~ debbb(cnt, x, y);
		}
		printf("%llu\n", cnt);
	}
	
	return 0;
}
