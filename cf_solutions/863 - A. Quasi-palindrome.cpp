#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	
	int sz = str.size(), i;
	while(str[sz-1] == '0')
		--sz;
		
    for(i = 0; i <= sz/2; ++i){
        if(str[i] != str[sz-i-1])
            break;
    }
    
    if(i > sz/2)
		cout << "YES" << endl;
		
	else
		cout << "NO" << endl;
		
	return 0;
}
