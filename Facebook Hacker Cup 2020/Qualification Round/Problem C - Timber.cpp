#include<bits/stdc++.h>
using namespace std;

int findeLength(pair<int, int>point[], int n) {
    int ans = 0, p, h;
    map<int, int> length;
    
    sort(point, point+n);
    for(int i = 0; i < n; ++i) {
        p = point[i].first;
        h = point[i].second;
        
        length[p] = max(length[p], length[p-h]+h);    // cut down to the left
        length[p+h] = max(length[p+h], length[p]+h);  // cut down to the right
        ans = max(ans, max(length[p], length[p+h]));
    }
    
    return ans;
}

int main() {
    freopen("timber_input.txt", "r", stdin);
    freopen("timber_output.txt", "w", stdout);
    
    int t, n, p, h;
    pair<int, int> point[800005];
    
    cin >> t;
    for(int tc = 1; tc <= t; ++tc) {
        cin >> n;
        for(int i = 0; i < n; ++i) {
            cin >> p >> h;
            point[i] = {p, h};
        }
            
        cout << "Case #" << tc << ": " << findeLength(point, n) << endl;
    }
    
    return 0;
}
