#include <bits/stdc++.h>
using namespace std;
int dfs(int u, string& s, vector<int>& l, vector<int>& r) {
    if (l[u] == 0 && r[u] == 0) return 0;
    int ans = INT_MAX;
    if (l[u])
        ans = min(ans, (s[u] != 'L') + dfs(l[u], s, l, r));
    if (r[u])
        ans = min(ans, (s[u] != 'R') + dfs(r[u], s, l, r));
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s = " " + s;
        vector<int> l(n + 1), r(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> l[i] >> r[i];
        cout << dfs(1, s, l, r) << '
';
    }
}