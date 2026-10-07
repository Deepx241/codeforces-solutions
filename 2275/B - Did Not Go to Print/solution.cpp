#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        stack<int> st;
        vector<bool> printed(n + 1);
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == '1') {
                st.push(i);
            }
            else if (s[i - 1] == '2') {
                if (!st.empty()) {
                    printed[st.top()] = true;
                    st.pop();
                }
                else {
                    printed[i] = true;
                }
            }
            else {
                printed[i] = true;
            }
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (!printed[i])
                ans.push_back(i);
        }
        cout << ans.size() << '
';
        for (int x : ans)
            cout << x << ' ';
        cout << '
';
    }
}