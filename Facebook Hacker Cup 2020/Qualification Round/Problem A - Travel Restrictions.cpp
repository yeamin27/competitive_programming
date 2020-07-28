#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("travel_restrictions_input.txt", "r", stdin);
    freopen("travel_restrictions_output.txt", "w", stdout);
    
    int t, n;
    string incoming, outgoing;
    char ans[55][55];
    
    cin >> t;
    for(int tc = 1; tc <= t; ++tc) {		
        cin >> n >> incoming >> outgoing;
        
        incoming = "#" + incoming;
        outgoing = "#" + outgoing;
        
        for(int i = 1; i <= n; ++i) {
            ans[i][i] = 'Y';
            for(int j = i+1; j <= n; ++j) {
                if(ans[i][j-1] == 'N' || incoming[j]  == 'N' || outgoing[j-1] == 'N')
                    ans[i][j] = 'N';
                else
                    ans[i][j] = 'Y';
            }
        }
        
        for(int i = n; i > 1; --i) {
            for(int j = i - 1; j > 0; --j) {
                if(ans[i][j+1] == 'N' || incoming[j]  == 'N' || outgoing[j+1] == 'N')
                    ans[i][j] = 'N';
                else
                    ans[i][j] = 'Y';
            }
        }
        
        cout << "Case #" << tc << ":" << endl;
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= n; ++j) {
                cout << ans[i][j];
            }
            
            cout << endl;
        }
    }
    
    return 0;
}
