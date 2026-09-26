#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    const int T = 1000; // multiple of 8 (the only cycle lengths are 1 and 8)
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<long long> finals(n);
        for (int i = 0; i < n; i++) {
            long long v = a[i];
            for (int step = 0; step < T; step++) {
                long long s = 0;
                while (v > 0) {
                    long long d = v % 10;
                    s += d * d;
                    v /= 10;
                }
                v = s;
            }
            finals[i] = v;
        }
        unordered_map<long long, long long> cnt;
        cnt.reserve(n * 2);
        for (int i = 0; i < n; i++) cnt[finals[i]]++;
        long long ans = 0;
        for (auto &p : cnt) {
            long long c = p.second;
            ans += c * (c - 1) / 2;
        }
        cout << ans << "
";
    }
}