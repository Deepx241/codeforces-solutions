#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        map<long long, long long> mp;
        long long ans = 0;
        for (int i = 1; i <= n - 4; i++) {
            long long v = a[i] + a[i + 2] - a[i + 4];
            ans += mp[v];
            if (i >= 3) {
                long long p = a[i - 2] + a[i] - a[i + 2];
                if (p == v)
                    ans--;
            }
            if (i >= 5) {
                long long p = a[i - 4] + a[i - 2] - a[i];
                if (p == v)
                    ans--;
            }
            mp[v]++;
        }
        cout << ans << '
';
    }
}