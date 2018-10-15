#include<bits/stdc++.h>
using namespace std;

long long val[10010];

long long fn(long long n) {
	if(val[n] != -1) return val[n];
	
    return val[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % 10000007;
}

int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    
    while( cases-- ) {
		memset(val, -1, sizeof val);
        scanf("%lld %lld %lld %lld %lld %lld %d", &val[0], &val[1], &val[2], &val[3], &val[4], &val[5], &n);
        printf("Case %d: %lld\n", ++caseno,  fn(n)%10000007 );
    }
    return 0;
}
