#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        // count frequency of each value (values are 1..100)
        map<int, int> cnt;
        for (int x : a) cnt[x]++;
        int mx = 0;
        for (auto &p : cnt) mx = max(mx, p.second);
        vector<int> res;
        res.reserve(n);
        for (int k = 1; k <= mx; k++) {
            vector<int> vals;
            for (auto &p : cnt) {
                if (p.second >= k) vals.push_back(p.first);
            }
            sort(vals.rbegin(), vals.rend()); // descending order
            for (int v : vals) res.push_back(v);
        }
        for (int i = 0; i < n; i++) {
            cout << res[i] << " 
"[i == n - 1];
        }
    }
    return 0;
}