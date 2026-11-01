#include <bits/stdc++.h>
using namespace std;
 
signed main() {
    auto f = [](int x, int y) {
        return 1 + (x == y);
    };
    int tt;
    cin >> tt;
    while (tt --> 0) {
        int n;
        cin >> n;
    
        vector<int> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
    
        int current = f(a.back(), b.back());
        for (int i = 0; i + 1 < n; i++) {
            current += f(a[i + 1], b[i]);
            current += f(a[i], b[i + 1]);
        }
    
        int answer = current;
    
        for (int i = 0; i + 1 < n; i++) {
            current -= f(a[i], b[i + 1]);
            current += f(a[i], b[i]);
            answer = max(answer, current);
        }
    
        cout << answer << '
';
    }
}