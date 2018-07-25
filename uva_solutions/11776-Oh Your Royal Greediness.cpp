#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second

int main()
{
	int n, tc = 0;
	long long x, y;
	vector<pair<long long, long long> > vec;
	
	while(scanf("%d", &n) && n != -1)
	{		
		++tc;
		vec.clear();
		
		for(int i = 0; i < n; ++i)
		{
			cin >> x >> y;
			vec.push_back({x,y});
		}
			
		long long cntl, cntr, mx = 0;
		for(int i = 0; i < n; ++i)
		{
			cntl = 0;
			cntr = 0;
			for(int j = 0; j < n; ++j)
			{
				if(vec[j].F <= vec[i].F && vec[j].S >= vec[i].F)
					++cntl;
				else if(vec[j].F <= vec[i].S && vec[j].S >= vec[i].S)
					++cntr;
			}
			mx = max(mx, max(cntl, cntr));
		}
		printf("Case %d: %lld\n", tc, mx);
	}


    return 0;
}
