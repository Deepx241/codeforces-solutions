#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        int l = 0;
        int ans = 0;
        // Two pointrs
        for (int r = 0; r < a.size(); r++) {
            while (a[r] - a[l] >= n) {
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        cout << ans << '
';
    }
}