#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    long long m, k;
    cin >> n >> m >> k;
 
    vector<long long> l(n), r(n), pref(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        pref[i + 1] = pref[i] + r[i] - l[i] + 1;
    }
 
    auto f = [&](long long s) -> long long {
        long long e = s + m - 1;
 
        int i = lower_bound(r.begin(), r.end(), s) - r.begin();
        int j = upper_bound(l.begin(), l.end(), e) - l.begin() - 1;
 
        if (i > j) return 0;
 
        long long ans = pref[j + 1] - pref[i];
        ans -= max(0LL, s - l[i]);
        ans -= max(0LL, r[j] - e);
        return ans;
    };
 
    long long mx = -1, pos = 0;
    for (int i = 0; i < n; i++) {
        long long cur = f(l[i]);
        if (cur > mx) {
            mx = cur;
            pos = l[i];
        }
    }
 
    if (k > mx) {
        cout << -1 << '
';
        return;
    }
 
    if (k == mx) {
        cout << pos << '
';
        return;
    }
 
    long long low = pos, high = 1000000000000001LL;
 
    while (high - low > 1) {
        long long mid = (low + high) / 2;
        if (f(mid) > k) low = mid;
        else high = mid;
    }
 
    cout << high << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}