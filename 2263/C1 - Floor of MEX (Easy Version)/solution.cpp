#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int k = 1; k <= n; k++)
            cin >> a[k];
        vector<vector<int>> st(n + 1), en(n + 1);
        vector<int> cur(n + 1, 0);
      for (int k = 1; k <= n; k++)
            st[0].push_back(k);
        vector<int> active;
        vector<int> ans;
        int bad = 0;
        for (int y = 0; y < n; y++) {
            for (int k : en[y])
                bad--;
 
            for (int k : st[y]) {
                if (cur[k] < a[k]) {
                    active.push_back(k);
                } else {
                    bad++;
                    int finish = (a[k] + 1) * k;
                    if (finish <= n)
                        en[finish].push_back(k);
                }
            }
            if (!active.empty() && bad == 0) {
                ans.push_back(y);
                vector<int> tmp;
                tmp.swap(active);
                for (int k : tmp) {
                    cur[k]++;
                    int nxt = cur[k] * k;
 
                    if (nxt < n)
                        st[nxt].push_back(k);
                }
            }
        }
        cout << ans.size() << '
';
        for (int x : ans)
            cout << x << ' ';
        cout << '
';
    }
    return 0;
}