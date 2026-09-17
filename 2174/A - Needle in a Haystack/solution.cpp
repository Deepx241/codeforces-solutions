#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        string s, t;
        cin >> s >> t;
 
        int cnt[26] = {};
 
        for (char c : t)
            cnt[c - 'a']++;
 
        bool ok = true;
 
        for (char c : s) {
            if (--cnt[c - 'a'] < 0)
                ok = false;
        }
 
        if (!ok) {
            cout << "Impossible
";
            continue;
        }
 
        string rem;
 
        for (int c = 0; c < 26; c++) {
            rem += string(cnt[c], char('a' + c));
        }
 
        string ans;
        int i = 0, j = 0;
 
        while (i < (int)s.size() && j < (int)rem.size()) {
            if (s[i] <= rem[j])
                ans += s[i++];
            else
                ans += rem[j++];
        }
 
        while (i < (int)s.size())
            ans += s[i++];
 
        while (j < (int)rem.size())
            ans += rem[j++];
 
        cout << ans << '
';
    }
}