#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;cin >> n;
    vector<long long> L(n);
    for (int i = 0; i < n; i++) {
        cin >> L[i];
    }
    long long cnt = L[n - 1];
    int ans = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (cnt == 0)
            ans++;
        cnt = max(cnt - 1, L[i]);
    }
    cout << ans << '
';
}