#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("alchemy_input.txt", "r", stdin);
    freopen("alchemy_output.txt", "w", stdout);
    
    int t, n, a, b;
    string str;
    
    cin >> t;
    for(int tc = 1; tc <= t; ++tc) {		
        cin >> n >> str;
        
        a = b = 0;
        for(int i = 0; i < n; ++i) {
            if(str[i] == 'A')
                ++a;
            else
                ++b;
        }
        
        cout << "Case #" << tc << ": " << (abs(a-b) == 1 ? 'Y' : 'N') << endl;
    }
    
    return 0;
}
