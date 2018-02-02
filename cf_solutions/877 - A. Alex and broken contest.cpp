#include<bits/stdc++.h>
using namespace std;

int count(const string& referenceString, const string& subString) {

  const size_t step = subString.size();

  size_t cnt(0);
  size_t pos(0) ;

  while( (pos=referenceString.find(subString, pos)) != string::npos) {
    pos +=step;
    ++cnt ;
  }

  return cnt;

}

int main()
{
	string str;
	cin >> str;
	
	int cnt = 0;
	cnt += count(str, "Danil");
	cnt += count(str, "Olya");
	cnt += count(str, "Slava");
	cnt += count(str, "Ann");
	cnt += count(str, "Nikita");
	
	if(cnt == 1)
		cout << "YES" << endl;
		
	else
		cout << "NO" << endl;
		
	return 0;
}
