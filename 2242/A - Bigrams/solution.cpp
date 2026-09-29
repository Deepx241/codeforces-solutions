#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;cin >> t;
    while (t--) {
        int k;
        cin >> k; int cnt2 = 0;  int mx = 0;
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            mx = max(mx, x);
            if (x == 2) cnt2++;
        }
        if (mx > 2 || cnt2 > 1)
            cout << "YES
";
        else
            cout << "NO
";
    }
}