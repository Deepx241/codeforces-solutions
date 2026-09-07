#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> freq(n + 1);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a <= n)
                freq[a]++;
        }
        for (int i = 0; i <= n; i++) {
            if (freq[i] == 0) {
                cout << i << '
';
                break;
            }
            if (freq[i] > 1 && i + x <= n) {
                freq[i + x] += freq[i] - 1;
            }
        }
    }
}
 
int main() {
    solve();
}