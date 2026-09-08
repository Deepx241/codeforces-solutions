#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        long long ans = 0;
        for (long long i = 0; i < k && x + i <= y - x; i++) {
            ans += (y + i) % (x + i);
        }
        long long cnt = min(k, max(0LL, y - 2 * x + 1));
        if (k > cnt)
            ans += (k - cnt) * (y - x);
        cout << ans << '
';
    }
}