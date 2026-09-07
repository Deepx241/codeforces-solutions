// Repeatedly ± k
//        ↓
// Same remainder mod k
//        ↓
// Differences divisible by k
//        ↓
// Largest possible k
//        ↓
// GCD of differences
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;
    long long mn = *min_element(a.begin(), a.end());
    long long ans = 0;
    for (auto x : a)
        ans = __gcd(ans, x - mn);
 
    if (ans == 0)
        cout << -1 << '
';
    else
        cout << ans << '
';
}
int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}