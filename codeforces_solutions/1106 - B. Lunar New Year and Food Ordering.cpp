#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

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

struct data
{
	ll p, r, in;
};

bool cmp(data x, data y)
{
	return x.p < y.p;
}

int main()
{
	ll n, m, x, y, c = 0;
	data arr[100005], temp[100005];
	
	cin >> n >> m;
	for(int i = 0 ; i < n; ++i)
	{
		cin >> arr[i].r;
		temp[i].r = arr[i].r;
		temp[i].in = i;
	}
	for(int i = 0 ; i < n; ++i)
	{
		cin >> arr[i].p;
		temp[i].p = arr[i].p;
	}
	sort(temp, temp+n, cmp);
	
	for(int i = 0; i < m; ++i)
	{
		ll cost = 0;
		cin >> x >> y;
		--x;
		if(arr[x].r >= y)
		{
			cout << y*arr[x].p << endl;
			arr[x].r -= y;
		}
		
		else
		{
			cost += arr[x].p * arr[x].r;
			y -= arr[x].r;
			arr[x].r = 0;
			
			while(y && c<n)
			{
				temp[c].r = min(arr[ temp[c].in ].r, temp[c].r);
				if(temp[c].r >= y)
				{
					cost += y*temp[c].p;
					
					temp[c].r -= y;
					arr[ temp[c].in ].r  = temp[c].r;
					y = 0;
				}
				else
				{
					cost += temp[c].r * temp[c].p;
					
					y -= temp[c].r;
					arr[ temp[c].in ].r = temp[c].r = 0;
					++c;
				}
			}
			if(y)
				cost = 0;
			cout << cost << endl;
		}
	}
			
		
		

	return 0;
}
