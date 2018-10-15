#include<bits/stdc++.h>
using namespace std;

unsigned long long hash1[1000005], hash2[1000005], power1[1000005], power2[1000005], base = 29, temp1, temp2;

int main()
{
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	string str1, str2;
 
	cin >> str1;
	cin >> str2;
 
	int ans = 0, l, r, flag;
	int sz1 = str1.size();
	int sz2 = str2.size();
 
	string s1, s2;
	if(sz1 <= sz2)
	{
		s1 = str1;
		s2 = str2;
	}
	else
	{
		s1 = str2;
		s2 = str1;
 
		sz1 = str2.size();
		sz2 = str1.size();
	}
	
	s1 = '#'+s1;
	s2 = '#'+s2;
 
	power1[0] = 1;
	hash1[0] = 1;
	for(int i = 1; i <= sz1; ++i)
	{
		hash1[i] = hash1[i-1]*base + s1[i];
		power1[i] = power1[i-1]*base;
	}
 
	power2[0] = 1;
	hash2[0] = 1;
	for(int i = 1; i <= sz2; ++i)
	{
		hash2[i] = hash2[i-1]*base + s2[i];
		power2[i] = power2[i-1]*base;
	}
	
	for(int i = 1; i <= sz1; ++i)
	{
		flag = 0;
		temp1 = hash1[i] - power1[i];
		//cout << "s1i >> " << s1[i] << "  temp1 >> " << temp1<<endl;
		if(sz1%i != 0)
			continue;
		
		for(l = 1; l <= sz1; l += i)
		{
			r = l+i-1;
			temp2 = hash1[r] - (hash1[l-1] * power1[r-l+1]);
			
			//cout << "l = " << l << " r = " << r << "  **  ";
			//cout << "s2i >>" << s2[i] << "   temp2 >> " << temp2 << endl;
 
			if(temp1 != temp2)
			{
				flag = 1;
				break;
			}
		}
		
		if(sz2%i != 0)
			continue;
		for(l = 1; l <= sz2; l += i)
		{
			r = l+i-1;
			temp2 = hash2[r] - (hash2[l-1] * power2[r-l+1]);
			
			//cout << "l = " << l << " r = " << r << "  **  ";
			//cout << "s2i >>" << s2[i] << "   temp2 >> " << temp2 << endl;
 
			if(temp1 != temp2)
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
			++ans;

		//cout << "ans >>>> " << ans << endl << endl;
	}
 
	cout << ans << endl;
 
 
	return 0;
}
