#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
 
signed main() {
    vector<int> primes;
    vector<bool> is_prime(32000 + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i <= 32000; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= 32000; j += i) {
                is_prime[j] = 0;
            }
        }
    }
 
    int t;
    cin >> t;
    while (t --> 0) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
 
        vector<vector<int>> ker(n);
        for (int i = 0; i < n; i++) {
            int x = a[i];
            for (int j = 0; j < primes.size() && primes[j] * primes[j] <= x; j++) {
                if (x % primes[j] == 0) {
                    int e = 0;
                    while (x % primes[j] == 0) { x /= primes[j]; e++; }
                    if (e & 1) ker[i].push_back(primes[j]);
                }
            }
            if (x > 1) ker[i].push_back(x);
        }
 
        map<vector<int>, int> mp;
        set<int> odd;
        for (int i = 0; i < n; i++) {
            for (int p : ker[i])
                if (!odd.insert(p).second) odd.erase(p);
            if (odd.size() <= 7)
                mp[vector<int>(all(odd))]++;
        }
 
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            auto it = mp.find(ker[i]);
            if (it != mp.end()) ans += it->second;
        }
        cout << ans << "
";
    }
}