#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int &x : h)
            cin >> x;
        int ans = h[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            ans = max(ans + 1, h[i]);
        }
        cout << ans << '
';
    }
}