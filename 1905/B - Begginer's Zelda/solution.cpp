#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> degree(n + 1);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            degree[u]++;
            degree[v]++;
        }
        int l = 0;
        for (int i = 1; i <= n; i++) {
            if (degree[i] == 1)
                l++;
        }
        cout << (l + 1) / 2 << '
';
    }
}