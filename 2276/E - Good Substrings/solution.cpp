#include <bits/stdc++.h>
 
using namespace std;
 
int t;
 
int main() {
    const string s25 = "2025", s26 = "2026";
    
    cin >> t;
    for (int tc = 0; tc < t; ++tc) {
        int n;
        string s;
        cin >> n >> s;
        
        vector <vector <int>> nxt(n, vector <int> (10));
        vector <int> cur(10, n);
        
        for (int i = n - 1; i >= 0; --i) {
            cur[s[i] - '0'] = i;
            for (int j = 0; j < 10; ++j)
                nxt[i][j] = cur[j];
        }
        
        vector <int> d(n + 1);
        vector <int> dd(n + 1);
        
        for (int l = 0; l < n; ++l) {
            int r25 = l, r26 = l;
            int i25 = 0, i26 = 0;
            
            while(i25 < s25.size() && r25 < n) {
                int x = s25[i25++] - '0';
                r25 = nxt[r25][x];
            }
            
            while(i26 < s26.size() && r26 < n) {
                int x = s26[i26++] - '0';
                r26 = nxt[r26][x];
            }
            
            int cnt = n - l;
            d[l] += cnt;
            --dd[l + 1];
            
            if (r25 < r26) {
                // bad == [r25..r26-1]
                cnt = r26 - r25;
                d[l] -= cnt;
                ++dd[r25 + 1];
                //--dd[r26];
                if(r26 < n)
                    --dd[r26 + 1];
            }
        }
        
        vector <int> ans(n);
        long long sum = 0, add = 0;
        for (int i = 0; i < n; ++i) {
            sum += d[i];
            add += dd[i];
            sum += add;
            cout << sum << ' ';
        }
        cout << endl;
    }
    return 0;
}