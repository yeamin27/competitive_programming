#include<bits/stdc++.h>
using namespace std;
 
#define   MAX_NODE  100005
#define   MAX_LEN   105

int       node[MAX_NODE][60];
int       isWord[MAX_NODE];
int       root, nnode;

void init()
{
	memset(isWord, 0, sizeof isWord);
	root = 0;
	nnode = 0;
	for(int i = 0; i < 55; ++i)
		node[root][i] = -1;
}

void insert()
{
	char      input[MAX_LEN];
	string    word;
	
	scanf("%s", input);
	word = input;
	int sz = word.size();
	
	if(sz > 3)
		sort(word.begin()+1, word.end()-1);
				
	int now = root, id;
	for(int i = 0; i < sz; ++i)
	{
		id = 0;
		
		if(word[i] >= 'A' && word[i] <= 'Z')
			id = word[i] - 'A';
			
		else if(word[i] >= 'a' && word[i] <= 'z')
			id = word[i] - 'a' + 26;
			
		if(node[now][id] == -1)
		{
			node[now][id] = ++nnode;
			for(int j = 0; j < 55; ++j)
				node[nnode][j] = -1;
		}
		now = node[now][id];
	}
	++isWord[now];
}

void search()
{
	long long   ans = 1;
	char        input[10005];
	string      sentance, token;
	
	scanf("%[^\n]%*c", input);
	sentance = input;
		
	int  sz, id, now;
	stringstream s(sentance);
	
	while(s >> token)
	{
		sz = token.size();
		now = root;
		if(sz > 3)
			sort(token.begin()+1, token.end()-1);
						
		for(int i = 0; i < sz; ++i)
		{
			id = 0;
			
			if(token[i] >= 'A' && token[i] <= 'Z')
				id = token[i] - 'A';
				
			else if(token[i] >= 'a' && token[i] <= 'z')
				id = token[i] - 'a' + 26;
				
			else if(token[i] == ' ')
				id = 52;
					
			if(node[now][id] == -1)
			{
				ans = 0;
				break;
			}
			now = node[now][id];
		}
		
		ans *= isWord[now];
	}
	
	printf("%lld\n", ans);
}

int main()
{
	int t, n, m;
	
	scanf("%d", &t);
	for(int tc = 1; tc <= t; ++tc)
	{
		init();
		
		printf("Case %d:\n", tc);
		
		scanf("%d", &n);
		getchar();
		while(n--)
			insert();
				
		scanf("%d", &m);
		getchar();
		while(m--)
			search();
	}
	
	return 0;
}
