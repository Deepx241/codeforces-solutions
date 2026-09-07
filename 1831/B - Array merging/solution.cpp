#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        vector<int> ca(2 * n + 1, 0);
        vector<int> cb(2 * n + 1, 0);
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && a[j] == a[i])
                j++;
 
            ca[a[i]] = max(ca[a[i]], j - i);
            i = j;
        }
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && b[j] == b[i])
                j++;
 
            cb[b[i]] = max(cb[b[i]], j - i);
            i = j;
        }
        int ans = 1;
        for (int x = 1; x <= 2 * n; x++) {
            ans = max(ans, ca[x] + cb[x]);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}