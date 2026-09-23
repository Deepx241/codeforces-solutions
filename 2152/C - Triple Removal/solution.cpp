#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 250005;
 
int a[MAXN];
int cnt[2][MAXN];
int diffPref[MAXN];
 
void solve() {
    int n, q;
    cin >> n >> q;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
 
        cnt[0][i] = cnt[0][i - 1];
        cnt[1][i] = cnt[1][i - 1];
 
        cnt[a[i]][i]++;
 
        diffPref[i] = diffPref[i - 1] + (a[i] != a[i - 1]);
    }
 
    while (q--) {
        int l, r;
        cin >> l >> r;
 
        int zeros = cnt[0][r] - cnt[0][l - 1];
        int ones = cnt[1][r] - cnt[1][l - 1];
 
        if (zeros % 3 || ones % 3) {
            cout << -1 << '
';
            continue;
        }
 
        int ans = zeros / 3 + ones / 3;
 
        if (diffPref[r] - diffPref[l] == r - l)
            ans++;
 
        cout << ans << '
';
    }
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}