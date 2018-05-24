#include<bits/stdc++.h>
using namespace std;

int       node[10005][128];
int       isWord[10005];
int       root, nnode, number;

vector < pair <string,double> > ans;

void init()
{
	ans.clear();
	number = 0;
	memset(isWord, 0, sizeof isWord);
	root = 0;
	nnode = 0;
	for(int i = 0; i < 128; ++i)
		node[root][i] = -1;
}

void insert()
{
	int     sz, now, id;
	string  species;
	
	while(getline(cin, species) && species != "")
	{
		sz = species.size();					
		now = root;
		
		for(int i = 0; i < sz; ++i)
		{
			id = species[i];
				
			if(node[now][id] == -1)
			{
				node[now][id] = ++nnode;
				for(int j = 0; j < 128; ++j)
					node[nnode][j] = -1;
			}
			now = node[now][id];
		}
		
		++isWord[now];
		++number;
	}
}

void search(int now, string species)
{
	char ch;
	for(int i = 0; i < 128; ++i)
	{
		ch = i;
		if(node[now][i] != -1)
			search( node[now][i], species+ch );
	}
	
	if(isWord[now])
	{
		double val = ( (double) isWord[now] * 100.0 ) / (double) number;
		ans.push_back( {species, val} );
	}
}

int main()
{	
	int t;
	string str;
	
	cin >> t;
	cin.ignore();
	cin.ignore();
	cout << setprecision(4) << fixed;
	while(t--)
	{
		init();
		
		insert();
		
		search(0, "");
		
		sort(ans.begin(), ans.end());
		
		for(auto it : ans)
			cout << it.first << " " << it.second << endl;
			
		if(t)
			cout << endl;
	}


	return 0;
}
